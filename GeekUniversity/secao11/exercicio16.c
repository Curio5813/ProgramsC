//
// Created by marcos on 20-11-2023.
//
#include <stdio.h>


int main() {

    FILE *arq;
    int tam = 5, vet[10], tamanho, n = 0, bit;
    char doc[50], str[20];

    printf("Qual o nome do arquivo? ");
    scanf("%s", *&doc);

    arq = fopen(doc, "w");

    for(int i = 0; i < tam; i++){
        printf("Digite o %dº inteiro: ", i + 1);
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < tam; i++) {
        printf("%d\n", vet[i]);
        tamanho = sizeof(vet[i]) * 2;

    }while(n < tam){
        for(int i = tamanho - 1; i >= 0; i--) {
            // Testa se o bit na posição i está ligado
            bit = (vet[n] >> i) & 1;
            sprintf(str, "%d", bit);
            fputs(str, arq);
            printf("%d",  bit);
        }n += 1;
        printf("\n");
        fputc('\n', arq);
    }

   return 0;
}
