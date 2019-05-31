//
//  main.c
//  Projet_C
//
//  Created by Abi Joly on 30/05/2019.
//  Copyright © 2019 Abi Joly. All rights reserved.
//

#define MAIN_MENU "1) Gestion des clients.\r\n\
2) Gestion des comptes.\r\n\
3) Gestion des opérations\r\n\
4) Historique.\r\n\
5) Administration.\r\n\
6) quit: Quitter\r\n"


#include <stdio.h>
#include <stdlib.h>

#include "gestion_client.h"
#include "gestion_client.c"

#include "gestion_compte.h"
#include "gestion_compte.c"

int main(int argc, const char * argv[]) {
    
    
    typedef struct client client;
    struct client
    {
        int id;
        char nom;
        char prenom;
        char profession;
        int numero;
    };
    
    int cpmenu;
    
    printf(MAIN_MENU);
    scanf("%d",&cpmenu);
    
    switch (cpmenu) {
        case 1:
          gestion_client();
            break;
        case 2:
          //  gestion_compte;
        case 3:
            //gestion_opération;
            break;
        case 4:
            //historique;
            break;
        case 5:
            //Administration
            break;
        case 6:
            //quit;
            break;
        default:
            //quit;
            break;
    }
    
    // insert code here...
    return 0;
}
