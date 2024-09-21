//
// Created by Gabriel Mendes on 06/08/2024.
//

/*
 * E7.5 – Notas em conceitos:
 * Em um curso de mestrado as avaliações dos alunos no histórico escolar aparecem em
 * forma de conceito. O regulamento do mestrado indica que um professor pode avaliar seus
 * alunos com notas convencionais de zero a dez, mas precisa repassar à secretaria do curso a
 * avaliação em termos de conceito. Nesse caso, a seguinte tabela de conversão deve ser usada
 * pelo professor:
 *   Intervalo da Nota  Conceito
 *      [9.0 a 10.0]       A
 *      [7.5 a 8.9]        B
 *      [6.0 a 7.4]        C
 *      [0.0 a 5.9]        D
 * Escreva um programa para ler uma nota e converte-la no conceito correspondente
 */

#include <stdio.h>

int main() {

    float n;
    char c;

    scanf("%f", &n);

    switch (n) {
        case n > 9: c = 'A';
            break;
        case n > 7.5: c = 'B';
            break;
        case n > 6: c = 'C';
        default: c = 'D';
    }

    printf("NOTA = %.1f CONCEITO = %c \n", n, c);

    return 0;
}