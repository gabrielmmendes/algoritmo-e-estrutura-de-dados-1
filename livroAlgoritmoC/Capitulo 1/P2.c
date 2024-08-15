//
// Created by Gabriel Mendes on 06/08/2024.
//

/*
 * P2 - Custo da Lata de Cerveja (dificuldade 1)
 * Um fabricante de latas deseja desenvolver um programa para calcular o custo de uma
 * lata cilíndrica de alumínio, sabendo-se que o custo do alumínio por m 2 é R$ 100,00.
 */

#include <stdio.h>

int main() {

    float raio, altura;

    scanf("%f", &raio);
    scanf("%f", &altura);

    printf("O VALOR DO CUSTO E = %.2f \n", 100 * (2 * (3.14159 * raio * raio) + 2 * 3.14159 * raio * altura));

    return 0;
}
