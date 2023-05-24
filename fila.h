#include <stdio.h>
#include <stdlib.h>

typedef int Elemento_t;

struct node{
    struct node *next;
    Elemento_t key;
};
typedef struct node node_t; 

struct fila{    
    struct node *head; 
    struct node *tail;
    int size;   
};
typedef struct fila fila_t;

fila_t *cria_fila(unsigned int limite_fila);

int insere (Elemento_t *o, fila_t *f);

int retira (Elemento_t *o, fila_t *f);

int ehVazia (fila_t *f);

int ehCheia (fila_t *f);
    
void imprime (fila_t *f);
