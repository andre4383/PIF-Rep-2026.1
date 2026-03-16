#include <stdio.h>

int num1;

int main(void) {

    printf("Digite um numero: ");
    scanf("%d", &num1);

    if (num1 % 2 == 0) {
        printf("Numero par");
    } else {
        printf("Numero impar");
    }


    return 0;
}