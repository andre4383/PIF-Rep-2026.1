#include <stdio.h>

void somaImperativa(int n, int *soma) {

    while (*soma < n) {
        *soma = *soma + 1;
        printf("%d\n", *soma);
    }

}

int main(void) {

    int numero;
    int contador = 0;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    somaImperativa(numero, &contador);

    return 0;
}