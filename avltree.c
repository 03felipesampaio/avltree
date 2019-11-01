#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <avltree.h>

SENT *create_trees(void){
    SENT *trees;

    trees = (SENT *) malloc(sizeof(SENT));
    trees->cpf_tree = (TREE *) calloc (1, sizeof(TREE));
    trees->nome_tree = (TREE *) calloc (1, sizeof(TREE));
    trees->data_tree = (TREE *) calloc (1, sizeof(TREE));

    trees->size = 0;
    return trees;
}

void add_elem(SENT *trees, REG *elem){
    void add_elem_cpf_tree(trees->cpf_tree , elem);
    void add_elem_data_tree(trees->nome_tree, elem);
    void add_elem_nome_tree(trees->data_tree, elem);
    trees->size++;
}
