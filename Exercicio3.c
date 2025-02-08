#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int a, b, c;

    printf("Considerando uma equacao de 2 grau: a*x^2 + b*x + c = 0 \n");
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    int raiz1, raiz2;

    raiz1 = ((-b) + (sqrt((pow(b,2) - (4*a*c))))) / 2*a;
    raiz2 = ((-b) - (sqrt((pow(b,2) - (4*a*c))))) / 2*a;

    printf("Equacao: %d *x^2 + %d *x + %d = 0 \n", a, b, c);
    printf("Raizes: %d | %d", raiz1, raiz2);


    return 0;
}