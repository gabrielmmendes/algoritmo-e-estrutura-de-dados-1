//
// Created by Gabriel Mendes on 06/08/2024.
//

#include <stdio.h>

int main() {

    float a, b, c, d;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    printf("O VALOR DO DETERMINANTE E = %.2f \n", a * d - b * c);

    return 0;
}
