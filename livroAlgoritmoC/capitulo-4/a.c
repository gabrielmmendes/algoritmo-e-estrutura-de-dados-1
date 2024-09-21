#include <stdio.h>

int main() {
    float distanciaCidades, localEncontro, momentoEncontro;
    int velocidadeCarroA, velocidadeCarroB, distanciaMenorQueZero, velocidadeMenorQueZero;

    do {
        printf("Entre com a distancia entre as cidades A e B: ");
        scanf("%f", &distanciaCidades);

        distanciaMenorQueZero = distanciaCidades <= 0;

        if (distanciaMenorQueZero) {
            printf("A distancia entre as cidades deve ser maior do que zero");
        }

    } while (distanciaMenorQueZero);

    do {
        printf("Entre com a velocidade do automovel que parte de A para B: ");
        scanf("%d", &velocidadeCarroA);

        velocidadeMenorQueZero = velocidadeCarroA <= 0;

        if (velocidadeMenorQueZero) {
            printf("A velocidade do automovel deve ser maior do que zero");
        }

    } while (velocidadeMenorQueZero);


    do {
        printf("Entre com a velocidade do automovel que parte de B para A: ");
        scanf("%d", &velocidadeCarroB);

        velocidadeMenorQueZero = velocidadeCarroB <= 0;

        if (velocidadeMenorQueZero) {
            printf("A velocidade do automovel deve ser maior do que zero");
        }

    } while (velocidadeMenorQueZero);

    momentoEncontro = distanciaCidades / (velocidadeCarroA + velocidadeCarroB);
    localEncontro = velocidadeCarroA * momentoEncontro;

    printf("Momento do encontro: %.2f horas apos a partida dos automoveis \n", momentoEncontro);
    printf("Local do encontro: %.2f Km da cidade A", localEncontro);
}