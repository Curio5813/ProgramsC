//
// Created by marcos on 24-11-2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    FILE *arq; FILE *aux1; FILE *aux2; FILE *aux3;
    int i = 1, qt = 0, n1 = 0, n2 = 1;
    float nota, maior = 0;
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
            }

        }
        fclose(arq);
        arq = fopen("texto19.txt", "r");
        while((c = fgetc(arq)) != EOF){
            if(c == ' ') {
                c = '\n';
                fputc(c, aux2);
            }if(c == 'A' || c == 'B' || c == 'C' || c == 'D' || c == 'E' || c == 'F' ||
                c == 'G' || c == 'H' || c == 'I' || c == 'J' || c == 'K' || c == 'L' ||
                c == 'M' || c == 'N' || c == 'O' || c == 'P' || c == 'Q' || c == 'R' ||
                c == 'S' || c == 'T' || c == 'U' || c == 'W' || c == 'X' || c == 'Y' ||
                c == 'z'){
                fputc(c, aux2);
            }
        }
    }fclose(arq);
    fclose(aux1);
    fclose(aux2);

    aux2 = fopen("texto_aux2_19.txt", "r");
    aux3 = fopen("texto_aux3_19.txt", "w");
    while(fgets(linha, sizeof(linha), aux2) != NULL){
        qt += 1;
        if(qt == 2){
            fputs(linha, aux3);
            i += 4;
        }if(qt == i && qt > 2){
            fputs(linha, aux3);
            i += 3;
        }

    }qt = 0;
    fclose(aux2);
    fclose(aux3);
    aux1 = fopen("texto_aux1_19.txt", "r");
    aux3 = fopen("texto_aux3_19.txt", "r");

    while((fgets(linha, sizeof(linha), aux1)) != NULL){
        nota = atof(linha);
        qt += 1;
        if(nota >= maior){
            maior = nota;
            n1 = qt;
        }

    }while((fgets(linha, sizeof (linha), aux3)) != NULL){
        if(n2 == n1){
            printf("A maior nota foi %.1f do(a) aluno(a) %s", maior, linha);
            break;
        }n2 += 1;



    }fclose(aux1);
    fclose(aux3);

    return 0;
}
