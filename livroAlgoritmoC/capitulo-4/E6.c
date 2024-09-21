//
// Created by Gabriel Mendes on 06/08/2024.
//

/*
 * E7.6 – Reajuste Salarial:
 * Fazer um algoritmo que calcule e imprima o salário reajustado de um funcionário de
 * acordo com as seguintes regras:
 * • Salário de até R$ 300,00, reajuste de 50%;
 * • Salário maior que R$300,00 reajuste de 30%;
 */

#include <stdio.h>

int main() {

    float salario;

    scanf("%f", &salario);

    printf("SALARIO COM REAJUSTE = %.2f \n", salario <= 300 ? salario * 1.5 : salario > 300 ? salario * 1.3 : salario);

    return 0;
}