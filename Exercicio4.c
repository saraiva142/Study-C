#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    int x, y, aux;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    if(x < 1){
        aux = x;
        y = aux;
    } else if (x == 1) {
        y = 0;
    } else if (x > 1) {
        aux = pow(x, 2);
        y = aux;
    } else {
        printf("ERROR");
    }

    printf("X = %d | Y = %d", x, y);

    return 0;
}

// y = x , se x < 1;
// y = 0 , se x = 1;
// y = x² , se x > 1;