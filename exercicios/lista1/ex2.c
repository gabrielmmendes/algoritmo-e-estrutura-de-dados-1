#include <stdio.h>

void main() {
    int ano, mes, dia[29], ehInvalido, diasTemperaturasMaximas[29], somaTemperaturasMaximas = 0, temperaturaMaxima, qtdDias = 1;

    do {
        printf("Entre com o ano da medicao das temperaturas: \n");
        scanf("%d", &ano);

        ehInvalido = ano < 2000 || ano > 2024;

        if (ehInvalido) {
            printf("\nAno deve ser maior ou igual a 2000 e menor ou igual a 2024\n");
        }

    } while(ehInvalido);

    do {
        printf("Entre com o mes da medicao das temperaturas: \n");
        scanf("%d", &mes);

        ehInvalido = mes < 1 || mes > 12;

        if (ehInvalido) {
            printf("\nMes deve ser maior do que zero e menor ou igual a 12\n");
        }

    } while(ehInvalido);


    printf("Temperaturas medidas (em graus Celsius):\n");
    for (int i = 0; i < 29; i++) {
        do {
            printf("\nDia %d:\n", i+1);
            scanf("%d", &dia[i]);

            ehInvalido = dia[i] < -70 || dia[i] > 60;

            if (ehInvalido) {
                printf("Temperatura deve ser maior ou igual a -70 graus e menor ou igual a 60 graus\n");
            }

        } while(ehInvalido);
    }

    temperaturaMaxima = dia[0];
    somaTemperaturasMaximas = dia[0];
    diasTemperaturasMaximas[0] = 0;
    int j = 1;
    for (int i = 1; i < 29; i++) {
        somaTemperaturasMaximas += dia[i];
        if (dia[i] > temperaturaMaxima) {
            temperaturaMaxima = dia[i];
            qtdDias = 1;
            j=0;
            diasTemperaturasMaximas[j++] = i;
        } else if (dia[i] == temperaturaMaxima) {
            qtdDias++;
            diasTemperaturasMaximas[j++] = i;
        }
    }

    printf("A maior temperatura maxima do mes foi de %d e aconteceu nos dias:", temperaturaMaxima);
    for (int i = 0; i < qtdDias; i++) {
        printf(" %d", diasTemperaturasMaximas[i]+1);
    }

    printf("\nA temperatura maxima media no mes foi de: %.1f graus Celsius\n", (float) somaTemperaturasMaximas / 29);
}