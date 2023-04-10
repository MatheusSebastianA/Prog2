#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define SIZE 100

void remove_caracter(char *string, int tam, int i){
    for(i; i < tam; i++){
        *(string+i) = *(string+i+1); 
    }

}

void ignora_caracter_diferente(char *string, int tam){
    int i;
    
    for(i = 0; i < tam; i++){
        if (*(string+i) == 32)
            remove_caracter(string, tam, i);
        if (*(string+i) >= 'A' && *(string+i) <= 'Z')
            *(string+i) += 32;
    }

    return;
}


void copia_string(char *string, char *string_copia){
    while (*string != '\0'){
        *string_copia = *(string);
        string_copia++;
        string++;
    }

    *string_copia = '\0';

    return;
}

void inverte_string(char *string, char *string_copia, int tam){
    int i;
    for(i=0; i < tam; i++){
        *string_copia = *(string+tam-1);
        string_copia++;
        string--;
    }

    *(string_copia+tam) = '\0';

    return;
}

int compara_string(char *string, char *string_copia){
    while (*string != '\0'){
        if (*string != *string_copia)
            return 0;
        string_copia++;
        string++;
    }

    return 1;
}

int main(){
    int tam;
    char *string, *string_copia;
    string = malloc(sizeof(char)*SIZE);
    string_copia = malloc(sizeof(char)*SIZE);

    scanf("%[^\n]", string);
    getchar();

    tam = strlen(string);


    printf("Antes: %s\n", string);
    ignora_caracter_diferente(string, tam);

    tam = strlen(string);
    printf("Depois: %s\n", string);
    copia_string(string, string_copia);
    printf("Depois da copia: %s\n", string_copia);
    inverte_string(string, string_copia, tam);
    printf("Depois da inversao: %s\n", string_copia);

    if (compara_string(string, string_copia))
        printf("Eh um palindromo");
    else
        printf("Nao eh pal");

    return 0;
}