#include <stdio.h>

int main(void) {
    int N;
    int maior, menor;
    int soma = 0;

    printf("Digite a quantidade de números que deseja adicionar: ");
    scanf("%d", &N);

    if (N < 1 || N > 20) {
        printf("Valor inválido");
        return 1;
    }

    int v[N];

    for (int i = 0; i < N; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nNúmeros do vetor:\n");
    for (int i = 0; i < N; i++) {
        printf("%d\n", v[i]);
    }

    maior = menor = v[0];

    for (int i = 0; i < N; i++) {
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
        soma += v[i];
    }

    float media = (float)soma / N;

    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("A media é: %.2f\n", media);


    return 0;
}