#include <stdio.h>

int main() {
    int valores[3];
    int soma, temp;

    for(int i = 0; i < 3; i++) {
        printf("Digite os valores a serem adicionados\n");
        scanf("%d", &valores[i]);

        temp = valores [i];
        soma = temp + soma;

    }
    printf("O valor da soma dos numeros eh: %d\n", soma);
    
}