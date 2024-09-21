//
// Created by Gabriel Mendes on 06/08/2024.
//

/*
 * P3- Cálculo do Determinante de uma Matriz Quadrada de Duas Dimensões (dificuldade 1)
 * Fazer um algoritmo tal que dados os quatro elementos de uma matriz 2 × 2, calcule e
 * escreva o valor do determinante desta matriz.
 */

#include <stdio.h>

int main() {

    float a, b, c, d;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    printf("O VALOR DO DETERMINANTE E = %.2f \n", a * d - b * c);

    return 0;
}
