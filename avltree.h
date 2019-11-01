#ifndef _AVL_TREE_
#define _AVL_TREE_

// Definindo TADs

typedef struct registro{ // TAD para armazenar informacoes pessoais
    int cpf, RG;
    int **data;
    char *nome, *cidade;
} REG;

typedef struct node{ // TAD para um no de uma arvore
    REG *elem;
    struct no *left, *right;
    int bal; // Balanceamento do no em relacao aos seus descendentes
} NODE;

typedef struct avl_tree{ // TAD para uma arvore AVL
    NODE *root;
} TREE;

typedef struct sentinel{
    TREE *cpf_tree, *data_tree, *nome_tree;
    int size;
} SENT;

// Definindo cabecalho das funcoes 

// Criacao das arvores
SENT *create_trees(void);

// Funcoes de inclusao de elementos
void add_elem(SENT *, REG *);
void add_elem_cpf_tree(TREE *, REG *);
void add_elem_data_tree(TREE *, REG *);
void add_elem_nome_tree(TREE *, REG *);

// Funcao para atualizacao de indices
    // Recalcula o indice de cada no

// Funcoes para o balanceamento
    // Balancea as arvores a cada
    // alteracao (adicao ou remocao)

// Funcoes de rotacao
    // Essenciais para balanceamento
    // 4 tipos
        // Esquerda-Esquerda
        // Esquerda-Direita
        // Direita-Esquerda
        // Direita-Direita

// Funcoes de busca (GET)
    // Busca por string
    // Busca por CPF
    // Busca por data
        // Deve buscar e imprimir todos
        // os cadastros do pessoal con-
        // tido no intervalo dado

// Funcoes para remocao de elementos
    // O PDF nao deixa claro qual
    // sera o parametro utilizado
    // para remocao

// Funcoes de impressao
    // Uma funcao para imprimir
    // dados a partir de um 
    // intervalo de datas

    // Imprimir todos os registros
    // em ordem alfabetica

// Funcao de desalocacao
    // Free em tudo

#endif