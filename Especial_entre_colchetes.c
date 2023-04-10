#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100

int caracter_diferente(char string[], int i){
    
    if ((string[i] >= 'a' && string[i] <= 'z'))
        return 0; 
        
    if ((string[i] >= 'A' && string[i] <= 'Z'))
        return 0; 
         
    if ((string[i] >= '0' && string[i] <= '9'))
        return 0;  
        
    if (string[i] == 32)
        return 0;
        
    if (string[i] == '\n')
        return 0;
        
    if (string[i] == '\0')
        return 0;
        
    if (string[i] == ']' || string[i] == '[')
        return 0;
    
    return 1;
}

int main(){
    char *string;
    int i, j, tam;
    
    string = malloc(sizeof(char)*SIZE+1);

    scanf("%[^\n]", string);
    getchar();
    tam = strlen(string);

    if(strlen(string) > SIZE+1)
        string = realloc(string, sizeof(char)*tam);
    
	for(i = strlen(string); i >= 0; i--){
		if (caracter_diferente(string, i)){
            for (j = strlen(string)-1; j >= i; j--){
                string[j+2] = string[j];
            }
            string[i] = '[';
            string[i+1] = string[i+2];
            string[i+2] = ']';
            string[strlen(string)+1] = '\0';
        }
    }
    
    
    printf("%s", string);  
    
    return 0;
}