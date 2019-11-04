#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <avltree.h>

SENT *create_trees(void){
    SENT *trees;

    trees = (SENT *) malloc(sizeof(SENT));
    trees->cpf_tree = (TREE *) calloc (1, sizeof(TREE));
    trees->name_tree = (TREE *) calloc (1, sizeof(TREE));
    trees->date_tree = (TREE *) calloc (1, sizeof(TREE));

    trees->size = 0;
    return trees;
}

void add_elem(SENT *trees, REG *person){
    void add_elem_cpf_tree(trees->cpf_tree , person);
    void add_elem_date_tree(trees->name_tree, person);
    void add_elem_name_tree(trees->date_tree, person);
    trees->size++;
}

NODE *create_node(REG *person){
    NODE *new;
    new = (NODE *) calloc (1, sizeof(NODE));
    new->elem = person;
    return new;
}

void add_elem_cpf_tree(TREE *avl_t, REG * person){
    if(!avl_t) return INVALID_TREE;

    NODE **p = &avl_t->root, *new;

    while(*p){
        if(person->CPF < (*p)->elem->CPF)
            p = &(*p)->left;
        else 
            p = &(*p)->right;
    }

    new = create_node(person);
    (*p) = new;
}

void add_elem_name_tree(TREE *avl_t, REG * person){
    if(!avl_t) return INVALID_TREE;

    NODE **p = &avl_t->root, *new;

    while(*p){
        if(strcmp(person->name, (*p)->elem->name) < 0)
            p = &(*p)->left;
        else 
            p = &(*p)->right;
    }

    new = create_node(person);
    (*p) = new;
}

void add_elem_date_tree(TREE *avl_t, REG * person){
    if(!avl_t) return INVALID_TREE;

    NODE **p = &avl_t->root, *new;

    while(*p){
        if(person->date->year < (*p)->elem->date->year)
            p = &(*p)->left;
        else if(person->date->year > (*p)->elem->date->year)
            p = &(*p)->right;
        else{ // Insercao de elemento quando ano eh o mesmo
            if(person->date->month < (*p)->elem->date->month)
                p = &(*p)->left;
            else if(person->date->month > (*p)->elem->date->month)
                p = &(*p)->right;
            else{ // Insercao de elemento quando ano e o mes sao os mesmos
               if(person->date->day < (*p)->elem->date->day)
                    p = &(*p)->left;
                else if(person->date->day > (*p)->elem->date->day)
                    p = &(*p)->right; 
            }
        }
    }

    new = create_node(person);
    (*p) = new;
}

