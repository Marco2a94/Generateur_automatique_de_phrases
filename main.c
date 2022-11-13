#include <stdio.h>
#include <stdlib.h>
#include "manipulation_fichier.h"
int main() {
//Ouverture d'un fichier
    FILE *fichier;
    int FLength;
//Stockage du contenu du fichier mini_dico.txt dans une variable de type FILE

    fichier = fopen("mini_dico.txt", "r");
    if(fichier==NULL){
        printf("Erreur fopen\n");
        return 1;
    }
    //readOpenedFile(fichier);
    FLength= fileLength(fichier, "mini_dico.txt");
    printf("%d",FLength);
    fclose(fichier);
    return 0;
}
