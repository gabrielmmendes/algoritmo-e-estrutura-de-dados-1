//
// Created by Gabriel Mendes on 06/08/2024.
//

/*
 * 2.A – Custo Final de um Carro
 * O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
 * porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que a
 * porcentagem do distribuidor seja de x% do preço de fábrica e os impostos de y% do preço de
 * fábrica, fazer um programa para ler o custo de fábrica de um carro, a percentagem do
 * distribuidor e o percentual de impostos, calcular e imprimir o custo final do carro ao consumidor.
 */

#include <stdio.h>

int main() {

    float precoFabrica, percentualDistribuidor, percentualImposto;

    scanf("%f", &precoFabrica);
    scanf("%f", &percentualDistribuidor);
    scanf("%f", &percentualImposto);

    printf("O VALOR DO CARRO E = %.2f \n", precoFabrica + precoFabrica * (percentualDistribuidor / 100) + precoFabrica * (percentualImposto / 100));

    return 0;
}