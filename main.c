#include <stdio.h>
#include <stdlib.h>
#include "manipulation_fichier.h"
int main() {
//Ouverture d'un fichier
    FILE *dictionnaire;
    int FLength;
//Stockage du contenu du fichier mini_dico.txt dans une variable de type FILE

    dictionnaire = fopen("mini_dico.txt", "r");
    if(dictionnaire==NULL){
        printf("Erreur fopen\n");
        return 1;
    }

    readOpenedFile(dictionnaire);

    FLength= fileLength(dictionnaire);
    printf("%d",FLength);
    fclose(dictionnaire);
    return 0;
}
