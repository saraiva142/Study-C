#include <stdio.h>

int main() {
    printf("Exercicio 1: \n");

    int x;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &x);

    // verifique se o número é divisível por 5 e por 3 ao mesmo tempo

    if ( (x % 5 == 0) && (x % 3 == 0) ){

        printf("O numero %d eh divisivel por 5 e por 3 !", x);
    } else {
        printf("O numero %d NAO eh divisivel por 5 e por 3 !", x);
    }

    // printf("%d", x);

    return 0;
}