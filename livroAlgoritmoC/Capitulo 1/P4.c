//
// Created by Gabriel Mendes on 06/08/2024.
//

/*
 * P4 – Decolagem de um avião (dificuldade 2)
 * Escrever um algoritmo que leia a massa (em toneladas) de um avião, sua aceleração
 * (m/s 2 ) e o tempo (s) que levou do repouso até a decolagem. O algoritmo deve calcular e
 * escrever a velocidade atingida (Km/h), o comprimento da pista (m) e o trabalho mecânico
 * realizado (J) no momento da decolagem.
 */

#include <stdio.h>

int main() {

    double massa, aceleracao, tempo;

    scanf("%lf", &massa);
    scanf("%lf", &aceleracao);
    scanf("%lf", &tempo);

    printf("VELOCIDADE = %.2f \n", aceleracao * tempo * 3.6);
    printf("ESPACO PERCORRIDO = %.2f \n", aceleracao * tempo * tempo / 2);
    printf("TRABALHO REALIZADO = %.2f \n", massa * 1000 * aceleracao * tempo * aceleracao * tempo / 2);

    return 0;
}
