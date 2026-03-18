#include <stdio.h>

int main(void) {
    int N;
    int contador = 0;
    float nota = 0;
    float notaTotal = 0;
    float media;

    printf("Digite quantas notas você quer tirar a média: ");
    scanf("%d", &N);


    if (N <= 0) {
        printf("Quantidade inválida.\n");
        return 1;
    }

    do {
        printf("Digite a nota %d: ", contador + 1);
        scanf("%f", &nota);

        notaTotal = notaTotal + nota;
        contador = contador + 1;
    } while (contador < N);

    media = notaTotal / N;

    printf("A média das suas notas é: %.2f\n", media);

    return 0;
}