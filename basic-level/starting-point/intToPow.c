#include <stdio.h>
#include <math.h>

double main() {
    double entrada;
    double exp = 2.0;

    printf("Digite o valor para descobrir seu valor ao quadrado\n");
    scanf("%lf", &entrada);

    double result = pow(entrada, exp); 

    printf("O valor do seu numero ao quadrado eh: %f\n", result);

    return 0;
}