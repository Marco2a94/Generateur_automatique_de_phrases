#include <stdio.h>
#include <stdlib.h>
#include "manipulation_fichier.h"
int main() {

    FILE *fichier;
    //fichier = openFile("mini_dico.txt","r");
    fichier = fopen("mini_dico.txt", "r");
    if(fichier==NULL){
        printf("Erreur fopen\n");
        return 1;
    }
    readOpenedFile(fichier);

    //printf("The one piece is real");
    return 0;
}
