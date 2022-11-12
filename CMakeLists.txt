cmake_minimum_required(VERSION 3.23)
project(Generateur_automatique_de_phrases C)

set(CMAKE_C_STANDARD 99)

add_executable(Generateur_automatique_de_phrases main.c manipulation_fichier.c manipulation_fichier.h)
