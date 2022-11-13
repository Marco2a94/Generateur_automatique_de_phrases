//
// Created by Marco Arrighi on 12/11/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include "manipulation_fichier.h"


#define Taille_Max 50
//Fonction qui affiche dans la console le contenu d'un fichier
void readOpenedFile(FILE *file) {
    int i=0;

    char str[Taille_Max];
    while ((fgets(str, Taille_Max, file)) != NULL)
    {
        //code pour une future fonction de selection
       /* while(str[i] != '\n')
        {
            if(str[i]=='\t')
            printf("%c\n", str[i]);
            i++;
        }*/
            printf("%s", str);
        i = 0;
    }

}
int fileLength(FILE* file){
    int length=0;
    char c;
    if(file != NULL)
    {
        while(fscanf(file,"%c",&c) != EOF)
        {
            length++;
        }
    }
    return length;
}

void turnFileInto3DTab(char *filePath, char *str){

}