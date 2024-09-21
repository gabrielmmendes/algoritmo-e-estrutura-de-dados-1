//
// Created by Gabriel Mendes on 06/08/2024.
//

/*
 * 2.B – Conversão de Decimal para Binário
 * Escreva um algoritmo em Linguagem C que leia um número 0 ≤ n ≤ 255 na base decimal
 * e apresente sua representação em binário. Caso o número informado não esteja no intervalo
 * especificado, o programa deve finalizar imprimindo a mensagem “Numero invalido!” na tela. A
 * transformação de um número na base decimal para binária é obtida pela sequência de divisões
 * por 2. O número 123, por exemplo, tem sua representação binária 01111011 porque:
 * Não é permitido o uso de outras bibliotecas além da stdio.h.
 */

#include <stdio.h>

int main() {

    int n;
    int b[8];

    scanf("%d", &n);

    if (n > 255 || n < 0) {
        printf("Numero invalido!");
        return 1;
    }

    for (int i = 0; i < 8; i++) {
        b[i] = n%2;
        n /= 2;
    }

    for (int i = 7; i >= 0; i--) {
        printf("%d", b[i]);
    }

    return 0;
}