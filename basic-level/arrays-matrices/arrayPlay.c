#include <stdio.h>

int main () {
    int array[6] = {1, 0, 5, -2, -5, 7};
    int soma = array[0] + array[1] + array[5];
    array[4] = 100;

    for (int i = 0; i < 6; i++) {
        printf("O valor da posicão [%d] é %d\n", i, array[i]);
    }
}