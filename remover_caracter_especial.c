#include <stdio.h>
#include <string.h>
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
        
    return 1;
}

int string_errada(char string[]){
    int i;
    
    for (i = 0; i < strlen(string); i++){
        if (caracter_diferente(string, i))
            return 1;
    }
    
    return 0;
}

int main(){
    char string[SIZE+1];
    int i, j;
    
    fgets(string, SIZE+1, stdin);
    
    while (string_errada(string)){
        for(i = 0; i < strlen(string); i++){
            if (caracter_diferente(string, i)){
                for(j = i; j < strlen(string); j++){
                    string[j] = string[j+1];
                }
            }
        }
    
    }
    
    printf("%s", string);  
    
    return 0;
}




