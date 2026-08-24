#include <stdio.h>

int main() {
    int vetor[10];
    int quantidadePar = 0;

    for (int i = 0; i < 10; i++) {
        printf("Insira o valor na posição %d na matriz\n", i);
        scanf("%d", &vetor[i]);

        if (vetor[i]%2 == 0) {
            quantidadePar++;
            int vetorPares[quantidadePar];
            vetorPares[i] = vetor[i];

            printf("Valor %d eh par, temos ate agora %d pares\n", vetorPares[i], quantidadePar);
        }
        
    }

    
}