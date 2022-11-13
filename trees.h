//
// Created by Marco Arrighi on 13/11/2022.
//

#ifndef GENERATEUR_AUTOMATIQUE_DE_PHRASES_TREES_H
#define GENERATEUR_AUTOMATIQUE_DE_PHRASES_TREES_H

#endif //GENERATEUR_AUTOMATIQUE_DE_PHRASES_TREES_H

//Définition du type noeud node
typedef struct s_node
{
    struct s_node *left ;
    char value ;
    struct s_node *right ;
} t_node, *p_node ;

//Fonction qui cree un noeud, prend pour parametre la valeur à stocker et renvoie un pointeur vers un noeud
p_node createNode(char val) ;

//Definition de la structure de la racine de l'arbre
typedef struct s_tree
{
    p_node root ;
} t_tree ;
