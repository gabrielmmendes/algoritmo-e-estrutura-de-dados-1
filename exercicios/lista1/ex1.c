#include <stdio.h>

void main() {

    int numAlunos, ehValidoDado, qtdMaiorNota = 1, qtdMenorNota = 1;

    do {
        printf("Entre com o numero de alunos da turma: ");
        scanf("%d", &numAlunos);

        ehValidoDado = numAlunos > 0 && numAlunos <= 50;

        if (!ehValidoDado) {
            printf("\nO numero de alunos na turma deve ser maior do que zero e menor ou igual a 50\n");
        }
    } while (!ehValidoDado);

    float notaAlunos[numAlunos][4], notasMedias[numAlunos], somaNotas = 0;

    do {
        for (int i = 0; i < numAlunos; ++i) {
            printf("\n\nNotas aluno %d: ", i+1);

            for (int j = 0; j < 4; ++j) {
                scanf("%f", &notaAlunos[i][j]);

                ehValidoDado = notaAlunos[i][j] >= 0 && notaAlunos[i][j] <= 10;

                if (!ehValidoDado) {
                    break;
                }
            }

            if (ehValidoDado) {
                for (int j = 0; j < 4; j++) {
                    for (int k = 0; k < 4; k++) {
                        if (notaAlunos[i][j] > notaAlunos[i][k]) {
                            float aux = notaAlunos[i][j];
                            notaAlunos[i][j] = notaAlunos[i][k];
                            notaAlunos[i][k] = aux;
                        }
                    }
                }

                int todasDiferentes = 0, nemMaiorNemMenor, notaMaior, notaMenor;
                for (int j = 0; j < 3; ++j) {
                    if (notaAlunos[i][j] != notaAlunos[i][j+1]) {
                        todasDiferentes = 1;
                    } else {
                        todasDiferentes = 0;
                        break;
                    }
                }

                if (notaAlunos[i][0] == notaAlunos[i][1] && notaAlunos[i][2] == notaAlunos[i][3]) {
                    nemMaiorNemMenor = 1;
                } else {
                    nemMaiorNemMenor = 0;
                }

                if (notaAlunos[i][0] > notaAlunos[i][1] && notaAlunos[i][2] == notaAlunos[i][3]) {
                    notaMaior = 1;
                } else {
                    notaMaior = 0;
                }

                if (notaAlunos[i][0] == notaAlunos[i][1] && notaAlunos[i][2] > notaAlunos[i][3]) {
                    notaMenor = 1;
                } else {
                    notaMenor = 0;
                }

                if (todasDiferentes) {
                    notasMedias[i] = (notaAlunos[i][0] * 4 + notaAlunos[i][1] * 3 + notaAlunos[i][2] * 2 + notaAlunos[i][3] * 1) / 10;
                }

                if (nemMaiorNemMenor) {
                    notasMedias[i] = (notaAlunos[i][0] * 2.5 + notaAlunos[i][1] * 2.5 + notaAlunos[i][2] * 2.5 + notaAlunos[i][3] * 2.5) / 10;
                }

                if (notaMaior) {
                    notasMedias[i] = (notaAlunos[i][0] * 4 + notaAlunos[i][1] * 2 + notaAlunos[i][2] * 2 + notaAlunos[i][3] * 2) / 10;
                }

                if (notaMenor) {
                    notasMedias[i] = (notaAlunos[i][0] * 3 + notaAlunos[i][1] * 3 + notaAlunos[i][2] * 3 + notaAlunos[i][3] * 1) / 10;
                }

                printf("\nMedia final do aluno %d: %.1f", i+1, notasMedias[i]);
            } else {
                printf("\nTodas as notas do aluno devem ser maiores ou iguais a zero e menores ou iguais a 10\n");
                i--;
            }
        }

    } while (!ehValidoDado);

    for (int i = 0; i < numAlunos; i++) {
        for (int j = 0; j < numAlunos; j++) {
            if (notasMedias[i] > notasMedias[j]) {
                float aux = notasMedias[i];
                notasMedias[i] = notasMedias[j];
                notasMedias[j] = aux;
            }
        }
    }

    for (int i = 0; i < numAlunos; ++i) {
        somaNotas += notasMedias[i];
    }

    for (int i = 1; i < numAlunos; ++i) {
        if (notasMedias[0] == notasMedias[i]) {
            qtdMaiorNota++;
        }

        if (notasMedias[numAlunos-1] == notasMedias[i]) {
            qtdMenorNota++;
        }
    }

    printf("\n\nMedia geral da turma: %.1f\n", somaNotas / numAlunos);
    printf("\nMaior media da turma: %.1f (Alunos: %d)\n", notasMedias[0], qtdMaiorNota);
    printf("\nMenor media da turma: %.1f (Alunos: %d)\n", notasMedias[numAlunos-1], qtdMenorNota);
}