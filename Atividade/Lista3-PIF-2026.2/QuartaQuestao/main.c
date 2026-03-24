#include <stdio.h>

int main(void) {
    int N;
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &N);

    if (N < 1 || N > 5) {
        printf("Tamanho inválido");
        return 1;
    }

    int mat[5][5];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    int somaDiagonal = 0;
    printf("\nDiagonal principal: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", mat[i][i]);
        somaDiagonal += mat[i][i];
    }

    int simetrica = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (mat[i][j] != mat[j][i]) {
                simetrica = 0;
                break;
            }
        }
        if (!simetrica) break;
    }

    if (simetrica)
        printf("Matriz Simétrica\n");
    else
        printf("Matriz Não simétrica\n");

    return 0;
}