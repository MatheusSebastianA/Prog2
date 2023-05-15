#include <stdlib.h>
#include <stdio.h>

typedef union {
    int valor;
    char caract;
    char frase[8];
} union_t;

void recebe_valor(union_t a, int tipo){
    switch (tipo){
        case 1:
            scanf("%d", a.valor);
            printf("O valor de %d ao quadrado é %d\n", a.valor, a.valor*a.valor);
            break;
        case 2:
            scanf("%c", a.caract);
            if(a.caract >= 65 && a.caract <= 90)
                printf("A letra %c é maiusc e min será %c\n", a.caract, a.caract + 32);
            else
                printf("A letra %c é min e maiusc será %c\n", a.caract, a.caract - 32);
            break;
        case 3:
            scanf("%s", a.frase);
            break;
        default:
            printf("Valor passado é inválido");
            break;

    
    }

    return;
}

int main(){
    union_t a;
    int tipo = 1;
    recebe_valor(a, tipo);
    recebe_valor(a, 2);

    return 0;
}
