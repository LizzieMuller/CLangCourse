#include <stdio.h>

int main() {
    int numbers[10] = {4, 72, 15, 25, 1, 80, 7, 19, 10, 20};
    int largest = 0, smallest = 0;
    int storeL = 0, storeS = 0;

    for(int i = 1; i < 10; i++) {
       
        if(numbers[i] > numbers[largest]) {
            largest = i;
            storeL = numbers[largest];
        }

        if(numbers[i] < numbers[smallest]) {
            smallest = i;
            storeS = numbers[smallest];
        }

    }
    printf("The largest and smallest values between the numbers are: %d, %d\n", storeL, storeS);
}