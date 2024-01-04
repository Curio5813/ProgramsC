//
// Created by marcos on 02-01-2024.
//
#include <stdio.h>

void intToBinary(int num1, int num2) {

    int cont = 0;

    int tamanho = sizeof(int) * 8;

    // Loop para percorrer cada bit do inteiro
    for(int k = num1; k <= num2; k++){
        for (int i = tamanho - 1; i >= 0; i--) {
            // Verifica se o bit na posição i está definido
            int bit = (k >> i) & 1;

            if(bit == 1){
                cont += 1;

            }

        }

    }

    printf("%d", cont);
}

int main() {
    int a, b, cont;

    // Solicita ao usuário para digitar um número inteiro
    scanf("%d %d", &a, &b);

    // Chama a função para converter e imprimir a representação binária
    intToBinary(a, b);

    return 0;
}
