#include <stdio.h>

//utilizando tabela ascii para gerar o alfabeto
int geraAlfabeto(){
    for (int i = 97; i <= 122; i++) {
        printf("%c\n", i);

    }
}

int main (){
    geraAlfabeto();
}