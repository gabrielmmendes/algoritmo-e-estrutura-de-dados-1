//
// Created by Gabriel Mendes on 06/08/2024.
//

/*
 * E7.3 – Número Invertido:
 * Escreva um programa para ler um número de três dígitos e imprimir o número invertido.
 */

#include <limits.h>
#include <stdio.h>

int numPlaces (int n) {
    if (n < 0) n = (n == INT_MIN) ? INT_MAX : -n;
    if (n < 10) return 1;
    if (n < 100) return 2;
    if (n < 1000) return 3;
    if (n < 10000) return 4;
    if (n < 100000) return 5;
    if (n < 1000000) return 6;
    if (n < 10000000) return 7;
    if (n < 100000000) return 8;
    if (n < 1000000000) return 9;
    /*      2147483647 is 2^31-1 - add more ifs as needed
       and adjust this final return as well. */
    return 10;
}

int main() {

    int n;

    scanf("%d", &n);

    int nSize = numPlaces(n);
    char nInvertido[nSize];

    for (int i = 0; i < nSize; i++) {
        nInvertido[i] = n % 10;
        n = (n - nInvertido[i]) / 10;
    }

    for (int i = 0; i < nSize; i++) {
        printf("%d", (int) nInvertido[i]);
    }
    printf("\n");

    return 0;
}

