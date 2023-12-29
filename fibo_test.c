//
// Created by marcos on 27-12-2023.
//
#include <stdio.h>
#include <stdlib.h>

// Função para calcular a sequência de Fibonacci até o n-ésimo termo
unsigned long long* fibonacci(long long int n) {
    // Alocar memória para armazenar os termos da sequência
    unsigned long long* fib = (unsigned long long*)malloc(n * sizeof(unsigned long long));

    // Calcular os termos da sequência de Fibonacci
    fib[0] = 0;
    if (n > 1) {
        fib[1] = 1;
        for (long long int i = 2; i < n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
    }

    return fib;
}

int main() {
    long long int n = 1000000000;  // Número desejado de termos

    // Calcular a sequência de Fibonacci até o milionésimo termo
    unsigned long long* fibSequence = fibonacci(n);

    if (fibSequence != NULL) {
        // Imprimir a sequência ou realizar outras operações conforme necessário
        printf("%llu ", fibSequence[99999999]);
        printf("\n");

        // Liberar a memória alocada
        free(fibSequence);
    }

    return 0;
}
