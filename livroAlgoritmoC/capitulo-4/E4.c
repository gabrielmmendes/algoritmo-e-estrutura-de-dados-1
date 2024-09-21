//
// Created by Gabriel Mendes on 06/08/2024.
//

/*
 * E7.4 – Valor em notas e moedas:
 * Escreva um algoritmo par ler um valor em reais e calcular qual o menor número possível
 * de notas de $R 100, $R 50, $R 10 e moedas de $R 1 em que o valor lido pode ser decomposto.
 * O programa deve escrever a quantidade de cada nota e moeda a ser utilizada.
 */

#include <stdio.h>

int main() {

    int n, n100, n50, n10, n1;

    scanf("%d", &n);

    n100 = n / 100;
    n %= 100;

    n50 = n / 50;
    n %= 50;

    n10 = n / 10;
    n %= 10;

    n1 = n / 1;
    n %= 1;

    printf("NOTAS DE 100 = %d \n", n100);
    printf("NOTAS DE 50 = %d \n", n50);
    printf("NOTAS DE 10 = %d \n", n10);
    printf("NOTAS DE 1 = %d \n", n1);

    return 0;
}

