#include <stdio.h>

int main(void) {

    float maiorNota, menorNota, Nota;
    int N;
    float soma = 0;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &N);

    float notas[N];

    for (int i = 0; i < N; i++) {
        printf("Digite a nota %d: \n", i + 1);
        scanf("%f", &notas[i]);

        soma += notas[i];
    }
    printf("Média %.1f\n", soma / N);
    return 0;
}