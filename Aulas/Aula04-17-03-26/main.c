#include <stdio.h>

float Formula_Fahr (float celsius) {
    return (celsius * 1.8) + 32;
}

float Formula_Kevin (float celsius) {
    return celsius + 273.15;
}


int main(void) {
    float celsius = 0;

    printf("Escreva a tempera em Celsius: ");
    scanf("%f", &celsius);

    printf("A temperatura em Fahrenheit eh: %.2f\n", Formula_Fahr (celsius));
    printf("A temperatura em Kelvin eh: %.2f\n", Formula_Kevin (celsius));

    return 0;
}