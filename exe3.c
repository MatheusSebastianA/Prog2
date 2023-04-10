#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1024

void maiscular(char *min, char *mai){
    int i;
    for (i = 0; i < strlen(min); i++)
        mai[i] = min[i] - 32;

    mai[i] = '\0';
    return;
}


int main(){
    FILE *arq, *arq_dst; 
    char *min, *mai;

    min = malloc(sizeof(char)*SIZE);
    mai = malloc(sizeof(char)*SIZE);


    arq = fopen("minusc.txt", "r");

    if (! arq){
        perror("Erro ao abrir arquivo");
        return 1;
    }

    arq_dst = fopen("maiusc.txt", "w");

    if (! arq_dst){
        perror("Erro ao abrir arquivo");
        return 1;
    }

    while (fscanf (arq, "%s", min) !=  EOF){
        maiscular(min, mai);
        printf("%s ", mai);
        fprintf(arq_dst,  "%s", mai);
        
    }

    fclose(arq);
    return 0;
}
    