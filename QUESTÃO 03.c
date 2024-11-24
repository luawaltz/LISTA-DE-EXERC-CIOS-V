#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0; // Caso base: para n <= 0, retorne 0
    } else if (n == 1) {
        return 1; // Caso base: para n = 1, retorne 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Chamada recursiva
    }
}

int main() {
    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    int resultado = fibonacci(n);
    printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", n, resultado);

    return 0;
}
