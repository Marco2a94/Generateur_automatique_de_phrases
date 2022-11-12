//
// Created by Marco Arrighi on 12/11/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include "manipulation_fichier.h"

FILE* openFile(char fileName, char openingType){
    FILE *file;
    file = fopen(fileName, openingType);
    if(file==NULL){
        printf("Error : File can't be opened\n");
    }
    return file;
}
void readOpenedFile(FILE *file) {
    char c;
    while ((c = fgetc(file)) != EOF)
        printf("%c", c);
}