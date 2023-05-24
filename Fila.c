#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include "fila.h"

fila_t *cria_fila(unsigned int limite_fila){
    fila_t *f;

    if(!(f = malloc(sizeof(fila_t))))
        return NULL;
    f->head = NULL;
    f->tail = NULL;
    f->size = 0;
    return f;
}

int insere (Elemento_t *o, fila_t *f){
    if (f->head == NULL)
        f->head->key = *(o);
}

int retira (Elemento_t *o, fila_t *f){

}

int ehVazia (fila_t *f){

}

int ehCheia (fila_t *f){

}

void imprime (fila_t *f){

}
