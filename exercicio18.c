//
// Created by marcos on 22-11-2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    double media_geral = 0.0;
    char linha[1000];

    FILE *arq;
    arq = fopen("texto18.txt", "r");
    if (arq == NULL) {
        printf("Arquivo Inexistente");
    } else {
        int i = 0;
        while((fgets(linha, sizeof(linha), arq)) != NULL) {
            printf("%s", linha);
            media_geral += atof(linha);
            i++;
        }
        printf("Total: %.2lf", media_geral);
    }
    fclose(arq);

    return 0;
}