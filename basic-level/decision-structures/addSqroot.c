#include <stdio.h>

int main() {
    int values[3];
    int valuesSqroot[3];
    int sqrootTemp, add;

    for(int i = 0; i < 3; i++) {
        printf("Adicione o valor a ser somado ao quadrado:\n");
        scanf("%d", &values[i]);

        sqrootTemp = values[i] * values[i];
        valuesSqroot[i] = sqrootTemp;

        add = valuesSqroot[i] + add;

        printf("Valor %d adicionado a soma:\n", valuesSqroot[i]);

    }
    printf("O valor da soma dos quadrados eh: %d\n", add);

    return 0;
}