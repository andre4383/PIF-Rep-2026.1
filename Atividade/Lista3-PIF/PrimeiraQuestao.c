#include <stdio.h>

int main(void) {
    int N;

    printf("Digite um número: ");
    scanf("%d", &N);

    if (N <= 1 || N > 10) {
        printf("Valor inválido");
        return 1;
    }

    for (int i = 1; i <= 10; i++) {
        printf("Tabuada de %d: %d * %d = %d\n", N, N, i, N * i);
    }

    return 0;
}