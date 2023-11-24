//
// Created by marcos on 24-11-2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    FILE *arq; FILE *aux1; FILE *aux2;
    int nota, maior, i = 0, resultado;
    char c, linha[1000];

    arq = fopen("texto19.txt", "r");
    aux1 = fopen("texto_aux1_19.txt", "w");
    aux2 = fopen("texto_aux2_19.txt", "w");

    if(arq){
        while((c = fgetc(arq)) != EOF){
            if(c == '\n'){
                fputc(c, aux1);
            }if(c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' ||
            c == '6' || c == '7' || c == '8' || c == '9' || c == '.') {
                fputc(c, aux1);
            }else{
                fputc(c, aux2);
            }

        }
        fclose(arq);
        arq = fopen("texto19.txt", "r");
        while(fgets(linha, sizeof(linha), arq) != NULL){
            if(strcspn(linha, " ") != 0 || strcspn(linha, "\t") != 0){
                fputs(linha, aux2);
            }
        }
    }

    fclose(arq);
    fclose(aux1);
    fclose(aux2);

    return 0;
}
