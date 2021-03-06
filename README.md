# projet_banque
Projet en C simulant la gestion d'une banque

L’objectif de ce projet est de réaliser un programme permettant la gestion des données au sein d’une
banque.
Les données seront sauvegardées dans un (ou plusieurs) fichier(s) csv, à vous développeur de l’application,
de faire les choix qui vous semblent le plus pratique pour la manipulation des données.
L’ensemble des fonctionnalités attendues au sein de l’application est présenté ci-dessous de manière simple
et non exhaustive, à vous de les enrichir selon vos besoin lors de votre implémentation du projet. Les cas d’
erreurs sur les différentes manipulations et les vérifications élémentaires restent à
votre charge pour assurer un bon fonctionnement du programme.
La réalisation du projet est demandée en console, vous créerez des menus/actions afin de pouvoir l’utiliser à
l’aide du clavier.
Une interface graphique fenêtrée est considérée comme un « bonus » et n’entrera dans la note que si le
projet fonctionne en console.


Gestion des Clients :

Un client est défini par un identifiant, un nom, un prénom, une profession et un numéro de
téléphone.

? Ajouter un client :
Permet d’ajouter un client défini par les propriétés ci-dessus. Lors de l’enregistrement du
client, un identifiant numérique lui est attribué automatiquement par le système

? Modifier un client :
Permet de modifier toutes les informations d’un client (sauf son identifiant numérique). On doit pouvoir
choisir ce que l'on veut modifier.

? Supprimer un client:
Permet de supprimer un client. On se contentera de saisir son identifiant numérique pour
désigner le client à supprimer. Lors de la suppression du client, les comptes associés sont supprimés (voir la
section "comptes" ci-après)

? Recherche :
Permet la recherche d’un client. On se contentera de rechercher par le nom. On doit pouvoir
au moyen d’une syntaxe a établir de votre part rechercher les noms commençant par une chaine définie.
Par exemple en saisissant « DUP* » on obtient toutes les personnes dont le nom de famille commence par
DUP.



Gestion des comptes :
Un compte est défini par un identifiant, un propriétaire (un client), un solde, un taux et pour certains comptes
une durée minimale (de 0 par défaut si la disponibilité est immédiate) avant la mise a disposition des
fonds (en général plus la durée est longue (en années) et plus le taux de rémunération est élevé, mais ce
n'est pas une règle formelle).
Il y a donc plusieurs types de comptes, chaque type de compte est défini par un nom, une durée et un taux
associé (il peut y avoir des types de comptes sans taux ou alors à 0%)
Ces différents types de compte seront prédéfinis par vous et stockés dans un fichier de configuration. La
modification de cette configuration n'est pas demandée dans votre programme, en revanche on pourra
toujours éditer le fichier avec un editeur de texte classique pour le mettre à jour.

? Nouveau compte :
Permet la création d’un nouveau compte pour un client. Un client peut posséder zéro ou
plusieurs comptes.

? Consultation :
Permet la consultation du solde des comptes associés à un utilisateur.
On doit pouvoir consulter un compte précisément ou obtenir la liste de tous les comptes (en y affichant le
montant déposé sur chacun d'entre eux)

? Fermeture de compte :
Permet la fermeture (suppression) du compte dont on fournit l’identifiant numérique



Gestion des opérations :

? Dépôt :
Permet le dépôt d’un montant sur un compte. Lors du dépot, un bonus est calculé à partir du taux associé
au type de compte, ce bonus vient s'ajouter au dépôt initial, c'est une sorte de "cadeau" de la banque.
Par exemple si le taux du compte est de 5% et que vous versez 100€, le montant ajouté sur votre compte
sera alors de 105€

? Retrait :
Permet le retrait d’un montant d’un compte (attention à vérifier la disponibilité des fonds par rapport à la
Imprimé le : 31/05/19 08:10 durée du compte)

? Virement :
Permet le virement d’un montant d’un compte vers un autre (le bonus appliqué dans un dépôt n'est pas
appliqué sur la partie crédit du virement)



Historique :

? L'ensemble des opérations effectuées (tous comptes compris) sur une journée doivent être renseignées
sur un fichier. On pourrait comparer ce fichier à un fichier de log dans lequel on retrouve une trace de tout
ce qui a été réalisé (ouvertures de comptes, dépots, retraits...) que ce soit des opérations valides ou en
échec (en précisant la cause de l'échec)

? Vous devrez conserver un historique d'une semaine maximum

? Il n'est pas demandé de mettre en place une consultation du contenu de ce fichier (cette partie pouvant
être réalisée en bonus)



Administration:

? Prévoir une zone "cachée" dans votre programme qui devra être accessible après avoir saisi un mot de
passe (il n'est pas demandé de mettre en place une gestion des utilisateurs, ce mot de passe peut tres bien
etre stocké en dur dans votre code)

? Afficher la somme des montants de tous les comptes

? Afficher la somme des montants par type de compte

? Exporter l’ensemble des données de l’application

? Importer des données dans l’application (selon un format que vous définirez, il est fortement conseillé de
se baser sur le format qui vous sert a exporter les données). Dans le cas où l’application contient déjà des
données, les données importées devront fusionner avec les anciennes.

? Le mécanisme d'import/export doit se faire depuis votre application et non pas dans un logiciel tiers
