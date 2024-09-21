//
// Created by Gabriel Mendes on 06/08/2024.
//

/*
 * E7.2 – Distância entre dois pontos
 * Dados dois pontos A e B, cujas coordenadas A(x 1 , y 1 ) e B(x 2 , y 2 ) serão informadas
 * via teclado, desenvolver um programa que calcule a distância entre A e B.
 */

#include <stdio.h>
#include <math.h>

int main() {

    float x1, y1, x2, y2;

    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);

    printf("A DISTANCIA ENTRE A e B = %.2f \n", sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));

    return 0;
}