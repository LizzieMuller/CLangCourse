#include <stdio.h>

int main() {
    int start = 0;

    printf("The value of start is: %d\n", start);

    do 
    {
        start = start + 100;

        printf("The value of start is: %d\n", start);
        
    }while(start < 100000);

    return 0;
    
}