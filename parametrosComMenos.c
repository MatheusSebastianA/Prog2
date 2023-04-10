#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

int main(int argc, char **argv){
    int cont; 
    cont = 0;

    for(int i = 0; i < argc; i++) // looping que passa por todos os parâmetros passados.
        if (argv[i][0] == '-') //verifica se o parâmetro começa com " - ".
            cont = cont + 1;

    return cont;
}
