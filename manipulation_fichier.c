//
// Created by Marco Arrighi on 12/11/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include "manipulation_fichier.h"

//Fonction qui affiche dans la console le contenu d'un fichier
void readOpenedFile(FILE *file) {
    char c;
    while ((c = fgetc(file)) != EOF)
        printf("%c", c);
}