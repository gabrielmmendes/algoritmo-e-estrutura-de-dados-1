//
// Created by Gabriel Mendes on 06/08/2024.
//

#include <stdio.h>

int main() {

    float salarioMinimo, qtdKw;

    scanf("%f", &salarioMinimo);
    scanf("%f", &qtdKw);

    printf("Custo por kW: RS %.2f \n", salarioMinimo * .7 / 100);
    printf("Custo do consumo: RS %.2f \n", salarioMinimo * .7 / 100 * qtdKw);
    printf("Custo com desconto: RS %.2f \n", salarioMinimo * .7 / 100 * qtdKw * .90);

    return 0;
}
