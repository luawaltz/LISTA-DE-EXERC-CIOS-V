#include <stdio.h>
#include <stdlib.h>

int* criarProgressaoAritmetica(int n, int valorInicial, int razao) {
    int* array = (int*)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Erro na alocação de memória.\n");
        exit(1);
    }
    for (int i = 0; i < n; i++) {
        array[i] = valorInicial + i * razao;
    }
    return array;
}

void imprimirArray(int* array, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int n, valorInicial, razao;

    printf("Digite a quantidade de elementos: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Quantidade de elementos inválida.\n");
        return 1;
    }
    printf("Digite o valor inicial: ");
    if (scanf("%d", &valorInicial) != 1) {
        printf("Valor inicial inválido.\n");
        return 1;
    }
    printf("Digite a razão da progressão aritmética: ");
    if (scanf("%d", &razao) != 1) {
        printf("Razão inválida.\n");
        return 1;
    }

    int* array = criarProgressaoAritmetica(n, valorInicial, razao);
    imprimirArray(array, n);

    free(array);

    return 0;
}
