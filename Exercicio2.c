#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    int x1, x2, x3, x4;
    
    printf("Valor 1: \n");
    scanf("%d", &x1);
    
    printf("Valor 2: \n");
    scanf("%d", &x2);
    
    printf("Valor 3: \n");
    scanf("%d", &x3);
    
    printf("Valor 4: \n");
    scanf("%d", &x4);
    
    int lista[4] = {x1,x2,x3,x4};

    // Selection Sort:

    int i, j, aux;

    for (i = 1; i <= 3; i++) {
        
        aux = lista[i];
        j = i - 1;

        while ((j >= 0) && (aux < lista[j]))
        {
            lista[j+1] = lista[j];
            j--;
        }

        lista[j+1] = aux;
        
    }

    // for (i = 0 ; i < 4; i++){
    //     printf("%d", lista[i]);
    // }

    int soma = 0;

    for (i = 0; i <= 2; i++){
        soma = soma + lista[i];
    }
    printf("%d", soma);
    //soma = (lista[0]+lista[1]+lista[2]);




    return 0;
}