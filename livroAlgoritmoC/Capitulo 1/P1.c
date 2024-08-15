//
// Created by Gabriel Mendes on 06/08/2024.
//

/*
 * P1 - Consumo de energia (grau de dificuldade 1)
 * Sabendo-se que 100 kW de energia custam 70% do salário mínimo, escreva um
 * algoritmo que leia o valor do salário mínimo e a quantidade de kW gasta por uma residência.
 * Calcule e imprima:
 *  • o valor em reais de cada kW;
 *  • o valor em reais a ser pago pelo consumo da residência;
 *  • o novo valor a ser pago pela residência com um desconto de 10%.
 */

#include <stdio.h>

int main() {

    float salarioMinimo, qtdKw;

    scanf("%f", &salarioMinimo);
    scanf("%f", &qtdKw);

    printf("Custo por kW: RS %.2f \n", salarioMinimo * .7 / 100);
    printf("Custo do consumo: RS %.2f \n", salarioMinimo * .7 / 100 * qtdKw);
    printf("Custo com desconto: RS %.2f \n", salarioMinimo * .7 / 100 * qtdKw * .90);

    return 0;
}
