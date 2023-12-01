//
// Created by marcos on 29-11-2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    FILE *arq1; FILE *arq2; FILE *aux1; FILE *aux2;
    int tam = 5, nota[tam], notas[tam][3], ord_notas[tam][3], i, k, resto, maior = 0, menor = 11,
    meio, n1 = 0 ;
    char entrada[20], saida[20], ch, linha[1000][1000];

    printf("Qual o nome do arquivo de entrada? ");
    scanf("%s", &entrada);
    printf("Qual o nome do arquivo de saída? ");
    scanf("%s", &saida);

    arq1 = fopen(entrada, "r");
    arq2 = fopen(saida, "w");
    aux1 = fopen("texto22_aux1.txt", "w");
    aux2 = fopen("texto22_aux2.txt", "w");

    if(arq1){
        while((ch = fgetc(arq1)) != EOF) {
            if(ch == 'A' || ch == 'B' || ch == 'C' || ch == 'D' || ch == 'E' || ch == 'F'
            || ch == 'G' || ch == 'H' || ch == 'I' || ch == 'J' || ch == 'L' || ch == 'M'
            || ch == 'N' || ch == 'O' || ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S'
            || ch == 'T' || ch == 'U' || ch == 'V' || ch == 'W' || ch == 'X' || ch == 'Y'
            || ch == 'Z'){
                fputc(ch, aux1);
            }if(ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5'
            || ch == '6' || ch == '7' || ch == '8' || ch == '9') {
                fputc(ch, aux2);

            }if(ch == '\n'){
                fputc(ch, aux1);
                fputc(ch, aux2);
            }
        }

    }else{
        printf("Arquivo não encontrado!");
    }

    fclose(aux1);
    fclose(aux2);

    aux1 = fopen("texto22_aux1.txt", "r");
    aux2 = fopen("texto22_aux2.txt", "r");

    while((fgets(linha[100], sizeof(linha[100]), aux2)) != NULL) {
        if(i >= tam){
            break;
        }
        nota[i] = atoi(linha[100]);
        i++;

    }for(i = 0; i < tam; i++) {
        for (k = 2; k >= 0; k--) {
            resto = nota[i] % 10;
            nota[i] = nota[i] / 10;
            notas[i][k] = resto;
        }

    }for(i = 0; i < tam; i++){
        for(k = 0; k < 3; k++){
            if(notas[i][k] > maior){
                maior = notas[i][k];
            }if(notas[i][k] <= menor){
                meio = menor;
                menor = notas[i][k];
            }

        }ord_notas[i][0] = '0' + menor;
        ord_notas[i][1] = '0' + meio;
        ord_notas[i][2] = '0' + maior;
        maior = 0;
        menor = 11;

    }if(arq2){
        while((ch = fgetc(aux1)) != EOF) {
            if(ch == 'A' || ch == 'B' || ch == 'C' || ch == 'D' || ch == 'E' || ch == 'F'
               || ch == 'G' || ch == 'H' || ch == 'I' || ch == 'J' || ch == 'L' || ch == 'M'
               || ch == 'N' || ch == 'O' || ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S'
               || ch == 'T' || ch == 'U' || ch == 'V' || ch == 'W' || ch == 'X' || ch == 'Y'
               || ch == 'Z'){
                fputc(ch, arq2);
            }if(ch == '\n'){
                fputc('\t', arq2);
                for(i = n1; i < tam; i++){
                    for (k = 0; k < 3; k++){
                        fputc(ord_notas[i][k], arq2);
                        fputc(' ', arq2);
                    }break;
                }n1 ++;

            }if(ch == '\n') {
                fputc(ch, arq2);
            }
        }
    }

    fclose(arq1);
    fclose(arq2);
    fclose(aux1);
    fclose(aux2);

    return 0;
}

int comparar(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}