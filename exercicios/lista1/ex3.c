#include <stdio.h>

void ordenaVetorInteiro(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (v[i] > v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int temRepetido(int v[], int tamanho) {
    int vOrdenado[tamanho];

    for (int i = 0; i < tamanho; ++i) {
        vOrdenado[i] = v[i];
    }

    ordenaVetorInteiro(vOrdenado, tamanho);
    for (int i = 0; i < tamanho - 1; i++) {
        if (vOrdenado[i] == vOrdenado[i+1]) {
            return 1;
        }
    }
    return 0;
}

int temNoConjunto(int v[], int tamanho, int num) {
    for (int i = 0; i < tamanho; i++) {
        if (v[i] == num) {
            return 1;
        }
    }
    return 0;
}

int main() {

    int tamanhoA, tamanhoB, ehInvalidoDado;

    do {
        printf("Entre com o numero de elementos do conjunto A: \n");
        scanf("%d", &tamanhoA);

        ehInvalidoDado = tamanhoA <= 0;

        if (ehInvalidoDado) {
            printf("\nO numero de elementos do conjunto A deve ser maior do que zero\n\n");
        }
    } while (ehInvalidoDado);

    int a[tamanhoA];

    do {
        printf("\nEntre com os elementos do conjunto A: \n");
        for (int i = 0; i < tamanhoA; i++) {
            scanf("%d", &a[i]);

            ehInvalidoDado = temRepetido(a, i+1);

            if (ehInvalidoDado) {
                printf("\nO conjunto nao pode ter elementos repetidos\n");
                break;
            }
        }

    } while (ehInvalidoDado);

    do {
        printf("\nEntre com o numero de elementos do conjunto B: \n");
        scanf("%d", &tamanhoB);

        ehInvalidoDado = tamanhoB <= 0;

        if (ehInvalidoDado) {
            printf("\nO numero de elementos do conjunto B deve ser maior do que zero\n");
        }
    } while (ehInvalidoDado);

    int b[tamanhoB];

    do {
        printf("\nEntre com os elementos do conjunto B: ");
        for (int i = 0; i < tamanhoB; i++) {
            scanf("%d", &b[i]);

            ehInvalidoDado = temRepetido(b, i+1);

            if (ehInvalidoDado) {
                printf("\nO conjunto nao pode ter elementos repetidos\n");
                break;
            }
        }
    } while (ehInvalidoDado);

    int conjuntoUniao[tamanhoA + tamanhoB], tamanhoConjuntoU = 0;

    for (int i = 0; i < tamanhoA; i++) {
        conjuntoUniao[tamanhoConjuntoU] = a[i];
        tamanhoConjuntoU++;
    }

    for (int i = 0; i < tamanhoB; i++) {
        if (!temNoConjunto(a, tamanhoA, b[i])) {
            conjuntoUniao[tamanhoConjuntoU] = b[i];
            tamanhoConjuntoU++;
        }
    }

    int conjuntoInterseccao[tamanhoA < tamanhoB ? tamanhoA : tamanhoB], tamanhoConjuntoI = 0;

    for (int i = 0; i < tamanhoA; i++) {
        if (temNoConjunto(b, tamanhoB, a[i])) {
            conjuntoInterseccao[tamanhoConjuntoI] = a[i];
            tamanhoConjuntoI++;
        }
    }

    int conjuntoDiferencaAB[tamanhoA], tamanhoConjuntoDAB = 0;

    for (int i = 0; i < tamanhoA; i++) {
        if (!temNoConjunto(b, tamanhoB, a[i])) {
            conjuntoDiferencaAB[tamanhoConjuntoDAB] = a[i];
            tamanhoConjuntoDAB++;
        }
    }

    int conjuntoDiferencaBA[tamanhoB], tamanhoConjuntoDBA = 0;

    for (int i = 0; i < tamanhoB; i++) {
        if (!temNoConjunto(a, tamanhoA, b[i])) {
            conjuntoDiferencaBA[tamanhoConjuntoDBA] = b[i];
            tamanhoConjuntoDBA++;
        }
    }

    printf("\n\nConjunto uniao:");
    for (int i = 0; i < tamanhoConjuntoU; i++) {
        printf(" %d", conjuntoUniao[i]);
    }
    if (tamanhoConjuntoU == 0) {
        printf(" vazio");
    }

    printf("\n\nConjunto interseccao:");
    for (int i = 0; i < tamanhoConjuntoI; i++) {
        printf(" %d", conjuntoInterseccao[i]);
    }
    if (tamanhoConjuntoI == 0) {
        printf(" vazio");
    }

    printf("\n\nConjunto diferenca entre A e B:");
    for (int i = 0; i < tamanhoConjuntoDAB; i++) {
        printf(" %d", conjuntoDiferencaAB[i]);
    }
    if (tamanhoConjuntoDAB == 0) {
        printf(" vazio");
    }

    printf("\n\nConjunto diferenca entre B e A:");
    for (int i = 0; i < tamanhoConjuntoDBA; i++) {
        printf(" %d", conjuntoDiferencaBA[i]);
    }
    if (tamanhoConjuntoDBA == 0) {
        printf(" vazio");
    }

    return 0;
}