#include <stdio.h>

int main() {
    int multiples[3];
    int start = 3;

    printf("Three first multiples of three: \n");
    for(int i = 1; i <= 3; i++) {
        int temp = start * i;
        multiples[i-1] = temp;

        printf(" ° %d\n", multiples[i-1]);
        
    }
    
    return 0;
}