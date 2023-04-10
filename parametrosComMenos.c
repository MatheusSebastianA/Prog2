#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

int main(int argc, char **argv){
    int option, cont; 

    while ((option = getopt (argc, argv, "abc:")) != -1)
        cont = cont + 1;

    return cont;
}