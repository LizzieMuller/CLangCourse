#include <stdio.h>

int main() {
    float notas[4] = {9.6, 8, 4.5, 7};
    float soma, mean;

    printf("Suas notas são: \n");

    for(int i = 0; i < 4; i++) {
        soma = notas[i] + soma;
        
        printf(" - %.2lf\n", notas[i]);

    }

    mean = soma / 4 ;

    printf("O valor da soma das notas eh: %.2lf\n", mean);

return 0;

}