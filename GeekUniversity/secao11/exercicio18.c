//
// Created by marcos on 22-11-2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i = 0;
    float total = 0;
    char c, linha[1000];

    FILE *arq; FILE *aux;
    arq = fopen("texto18.txt", "r");
    aux = fopen("texto_aux18.txt", "w");

    if (arq == NULL) {
        printf("Arquivo Inexistente");
    } else {
        while((c = fgetc(arq)) != EOF) {
            if(c == '\n'){
                fputc(c, aux);
            }
            if(c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' ||
                    c == '7' || c == '8' || c == '9' || c == '.') {
                fputc(c, aux);

            }
        }
    }
    fclose(arq);
    fclose(aux);

    aux = fopen("texto_aux18.txt", "r");
    if (aux == NULL) {
        printf("Arquivo Inexistente");
    } else {
        while ((fgets(linha, sizeof(linha), aux)) != NULL) {
            total += atof(linha);
            i++;
        }
        printf("Total das Compras: %.2f\n", total);
    }
    fclose(aux);

    return 0;
}