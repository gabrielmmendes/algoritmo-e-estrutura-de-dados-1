//
// Created by Gabriel Mendes on 06/08/2024.
//

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
