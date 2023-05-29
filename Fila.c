#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include "libfila.h"

fila_t *cria_fila(unsigned int limite_fila){
    fila_t *f;

    if(!(f = malloc(sizeof(fila_t))))
        return NULL;
    f->head = NULL;
    f->tail = NULL;
    f->max = limite_fila;
    f->size = 0;
    return f;
}

int insere (Elemento_t *o, fila_t *f){
    if (ehCheia(f))
        return 0;
        
    if (ehVazia(f)){
        if (!(f->head = malloc(sizeof(node_t))))
            return 0;
        f->tail = f->head;
        f->head->key = *o; 
        f->head->next = NULL;
        f->size++;        
    }

    else{
        if (!(f->tail->next = malloc(sizeof(node_t))))
            return 0;
        f->tail->next->key = *o;
        f->tail = f->tail->next;
        f->tail->next = NULL;
        f->size++;
    }
       
    return 1;
}

int retira (Elemento_t *o, fila_t *f){
    node_t *aux;
    if (ehVazia(f))
        return 0;
    
    aux = f->head;
    *o = aux->key;
    f->head = f->head->next;
    f->size--;
    free(aux);
        
    return *o; 
}

int ehVazia (fila_t *f){
    if(f->size == 0)
        return 1;
    
    return 0;
}

int ehCheia (fila_t *f){
    if(f->size == f->max)
        return 1;
    
    return 0;
}

void imprime (fila_t *f){
    node_t *aux;
    if (ehVazia(f)){
        printf("Fila vazia");
        return;
    }

    aux = f->head;
    while (aux != NULL){
        if (aux == f->tail){
            printf("%d\n", aux->key);
            return;
        } 
        printf("%d ", aux->key);
        aux = aux->next;
    }
}
