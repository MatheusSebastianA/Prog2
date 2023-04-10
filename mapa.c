#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){
    FILE *arq;
    int lin, col, i, j;
    

    arq = fopen("mapa.txt", "r");

    if (!arq){
        perror("Arquivo não pode ser aberto");
        return 1;
    }

    fscanf(arq, "%d", &lin);
    fscanf(arq, "%d", &col);

    char mapa[lin+1][col+1];

    for(i = 0; i < lin; i++){
        for(j = 0; j < col+1; j++)
            mapa[i][j] = fgetc(arq);
    }

    for(i = 0; i < lin; i++){
        for(j = 0; j < col+1; j++)
            printf("%c", mapa[i][j]);
    }
    printf("\n");
    return 0;
}