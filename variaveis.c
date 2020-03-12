#include <stdio.h>
#include <stdlib.h>


void main() {
    int a;
    int b1;
    int clovis;
    double d;

    a = 5;
    b1 = 4;
    d = 3;

    printf("Soma a + b1 = %d", a+b1);
    printf("\nD = %f", d);
    b1 = 6;
    
    clovis = a + a/b1 + 1;
    printf("\nResultado para clovis = %d\n", clovis);

    a = 10;
    printf("\nResultado para clovis = %d\n", clovis);
    

    printf("Digite um valor: ");
    scanf("%d", &b1);

    printf("Exiba 2*a: %d\n", 2*a);
}
