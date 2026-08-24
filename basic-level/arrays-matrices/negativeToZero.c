#include <stdio.h>

int main() {
    int vetor[10];
    

    for (int i = 0; i < 10; i++) {
        printf("Insira o valor na posição %d na matriz\n", i);
        scanf("%d", &vetor[i]);

        if (vetor[i] < 0) {
            vetor[i] = 0;
            printf("Seu valor negativo foi substituido por 0\n0");
        }

        printf("Na posição %d esta o valor %d\n", i, vetor[i]);

    }
}