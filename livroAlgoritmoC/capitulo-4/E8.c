//
// Created by Gabriel Mendes on 06/08/2024.
//

/*
 * E7.8 – Ordem:
 * Você receberá três valores inteiros e deve descobrir quais deles correspondem às
 * variáveis a, b e c. Os números não serão dados em ordem exata, mas sabemos que o valor
 * correspondente a a é menor do que o valor correspondente a b, e que o valor correspondente
 * a b é menor do que o correspondente a c . Será informada a você a ordem em que os valores
 * associados a cada variável devem ser impressos. Escreva um programa que imprima os
 * valores na ordem requisitada.
 */

#include <stdio.h>

int main() {

    int n[3];
    char c[3];

    for (int i = 0; i < 3; i++) {
        scanf("%d", &n[i]);
    }

    for (int i = -1; i < 3; i++) {
        scanf("%c", &c[i]);
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int aux;
            if (n[i] < n[j]) {
                aux = n[i];
                n[i] = n[j];
                n[j] = aux;
            }
        }
    }

    // soma = n[0] + n[1] + n[2];
    //
    // printf("%d \n", soma);

    return 0;
}