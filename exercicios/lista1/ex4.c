#include <math.h>
#include <stdio.h>

typedef struct {
    int id;
    int vitorias;
    int derrotas;
    int empates;
} Time;

void ordenaTimesPorVitoria(Time v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (v[i].vitorias > v[j].vitorias) {
                Time aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

void ordenaTimesPorDerrota(Time v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (v[i].derrotas > v[j].derrotas) {
                Time aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

void ordenaTimesPorEmpates(Time v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (v[i].empates > v[j].empates) {
                Time aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

void ordenaPorId(Time v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (v[i].id < v[j].id) {
                Time aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int main() {
    int qtdTimes, ehInvalidaEntrada, maiorDiferenca = 0, qtdJogoComMaisGols = 0;

    do {
        printf("Entre com o numero de times participantes: \n");
        scanf("%d", &qtdTimes);

        ehInvalidaEntrada = qtdTimes < 2;

        if (ehInvalidaEntrada) {
            printf("\nNumero de times participantes deve ser maior ou igual a 2\n\n");
        }
    } while (ehInvalidaEntrada);

    Time times[qtdTimes];
    int fez[qtdTimes], levou[qtdTimes];

    for (int i = 0; i < qtdTimes; ++i) {
        times[i].id = i + 1;
        times[i].vitorias = 0;
        times[i].empates = 0;
        times[i].derrotas = 0;
    }

    for (int i = 0; i < qtdTimes; i++) {
        for (int j = 0; j < qtdTimes; j++) {
            int gols1, gols2;

            if (i != j) {
                do {
                    printf("\nPlacar time%d x time%d: \n", times[i].id, times[j].id);
                    scanf("%d %d", &gols1, &gols2);

                    ehInvalidaEntrada = gols1 < 0 || gols2 < 0;

                    if (ehInvalidaEntrada) {
                        printf("\nNumero de gols de cada time no placar deve ser maior ou igual a zero\n\n\n");
                    }
                } while (ehInvalidaEntrada);

                if (abs(gols1 - gols2) > maiorDiferenca) {
                    qtdJogoComMaisGols = 1;
                    maiorDiferenca = abs(gols1 - gols2);
                    fez[qtdJogoComMaisGols-1] = times[i].id;
                    levou[qtdJogoComMaisGols-1] = times[j].id;
                } else if (abs(gols1 - gols2) == maiorDiferenca) {
                    fez[qtdJogoComMaisGols] = times[i].id;
                    levou[qtdJogoComMaisGols] = times[j].id;
                    qtdJogoComMaisGols++;
                }

                if (gols1 > gols2) {
                    times[i].vitorias++;
                    times[j].derrotas++;
                } else if (gols1 == gols2) {
                    times[i].empates++;
                    times[j].empates++;
                } else {
                    times[i].derrotas++;
                    times[j].vitorias++;
                }
            }
        }
    }

    Time timesComMaisVitorias[qtdTimes];
    int qtd = 0;

    ordenaTimesPorVitoria(times, qtdTimes);

    timesComMaisVitorias[qtd] = times[qtd];
    qtd++;
    for (int i = 0; i < qtdTimes - 1; i++) {
        if (times[i].vitorias == times[i + 1].vitorias) {
            timesComMaisVitorias[qtd] = times[i + 1];
            qtd++;
        } else {
            break;
        }
    }

    printf("\nTime(s) com mais vitorias:");
    for (int i = 0; i < qtd; ++i) {
        printf(" %d", timesComMaisVitorias[i].id);
    }
    printf(" com %d vitoria(s)\n", timesComMaisVitorias[0].vitorias);


    Time timesComMaisDerrotas[qtdTimes];
    qtd = 0;

    ordenaTimesPorDerrota(times, qtdTimes);

    timesComMaisDerrotas[qtd] = times[qtd];
    qtd++;
    for (int i = 0; i < qtdTimes - 1; i++) {
        if (times[i].derrotas == times[i + 1].derrotas) {
            timesComMaisDerrotas[qtd] = times[i + 1];
            qtd++;
        } else {
            break;
        }
    }

    ordenaPorId(timesComMaisDerrotas, qtd);
    printf("\nTime(s) com mais derrotas:");
    for (int i = 0; i < qtd; ++i) {
        printf(" %d", timesComMaisDerrotas[i].id);
    }
    printf(" com %d derrota(s)\n", timesComMaisDerrotas[0].derrotas);


    Time timesComMaisEmpates[qtdTimes];
    qtd = 0;

    ordenaTimesPorEmpates(times, qtdTimes);

    timesComMaisEmpates[qtd] = times[qtd];
    qtd++;
    for (int i = 0; i < qtdTimes - 1; i++) {
        if (times[i].empates == times[i + 1].empates) {
            timesComMaisEmpates[qtd] = times[i + 1];
            qtd++;
        } else {
            break;
        }
    }

    printf("\nTime(s) com mais empates:");

    if (timesComMaisEmpates[0].empates == 0) {
        printf(" nao houve empates\n");
    } else {
        for (int i = 0; i < qtd; ++i) {
            printf(" %d", timesComMaisEmpates[i].id);
        }
        printf(" com %d empate(s)\n", timesComMaisEmpates[0].empates);
    }

    printf("\nMaior diferenca de gols foi de %d gol(s) no(s) jogo(s):", maiorDiferenca);
    for (int i = 0; i < qtdJogoComMaisGols; ++i) {
        printf(" time%d x time%d;", fez[i], levou[i]);
    }

    return 0;
}
