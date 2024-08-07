//
// Created by Gabriel Mendes on 06/08/2024.
//

#include <stdio.h>

int main() {

    float raio, altura;

    scanf("%f", &raio);
    scanf("%f", &altura);

    printf("O VALOR DO CUSTO E = %.2f \n", 100 * (2 * (3.14159 * raio * raio) + 2 * 3.14159 * raio * altura));

    return 0;
}
