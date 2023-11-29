//
// Created by marcos on 29-11-2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    FILE *arq1; FILE *arq2; FILE *aux1; FILE *aux2;
    int nota, notas[3][3], cont = 0;
    char alunos[3][20], entrada[20], saida[20], ch;

    printf("Qual o nome do arquivo de entrada? ");
    scanf("%s", &entrada);
    printf("Qual o nome do arquivo de saída? ");
    scanf("%s", &saida);

    arq1 = fopen(entrada, "r");
    arq2 = fopen(saida, "w");
    aux1 = fopen("texto22_aux1.txt", "w");
    aux2 = fopen("texto22_aux2.txt", "w");

    if(arq1){
        int *ptr = &ptr;
        while((ch = fgetc(arq1)) != EOF) {
            if(ch == 'A' || ch == 'B' || ch == 'C' || ch == 'D' || ch == 'E' || ch == 'F'
            || ch == 'G' || ch == 'H' || ch == 'I' || ch == 'J' || ch == 'L' || ch == 'M'
            || ch == 'N' || ch == 'O' || ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S'
            || ch == 'T' || ch == 'U' || ch == 'V' || ch == 'W' || ch == 'X' || ch == 'Y'
            || ch == 'Z'){
                fputc(ch, aux1);
            }if(ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5'
            || ch == '6' || ch == '7' || ch == '8' || ch == '9'){
                fputc(ch, aux2);
            }if(ch == '\n'){
                fputc(ch, aux1);
                fputc(ch, aux2);
            }
        }

    }else{
        printf("Arquivo não encontrado!");
    }

    fclose(arq1);
    fclose(arq2);
    fclose(aux1);
    fclose(aux2);

    return 0;
}