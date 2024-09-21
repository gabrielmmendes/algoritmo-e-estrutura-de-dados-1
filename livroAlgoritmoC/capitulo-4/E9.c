//
// Created by Gabriel Mendes on 06/08/2024.
//

/*
 * E7.7 – Soma dos 3 menores valores:
 * Fazer um programa para quatro valores inteiros e imprimir a soma dos três menores.
 */

#include <stdio.h>

int main() {

    int n[4], soma;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int aux;
            if (n[i] < n[j]) {
                aux = n[i];
                n[i] = n[j];
                n[j] = aux;
            }
        }
    }

    soma = n[0] + n[1] + n[2];

    printf("%d \n", soma);

    return 0;
}