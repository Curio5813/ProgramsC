//
// Created by marcos on 21-11-2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    FILE *arq1; FILE *arq2;
    int n1 = 0, n2, tam, p, q, post, pos1[30], pos2[30], matriz2[p][q];
    char ch, dim[30];

    arq1 = fopen("texto17.txt", "r");
    arq2 = fopen("texto17_saida.txt", "w");

    if(arq1) {
        while ((ch = fgetc(arq1)) != EOF) {
            if (ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' ||
                ch == '6' || ch == '7' || ch == '8' || ch == '9') {
                dim[n1] = ch;
                n1++;
            }


        }dim[n1] = '\0';
        printf("%s\n", dim);
        tam = strlen(dim);

        char *ptr;

        long matriz1 = strtol(dim, &ptr, 10);

        n2 = ((tam - 3) / 2) - 1;

        for(int i = 0; i < tam; i++){
            if(i < tam - 3){
                pos2[n2] = matriz1 % 10;
                matriz1 /= 10;
                pos1[n2] = matriz1 % 10;
                matriz1 /= 10;
                i += post;
                n2 -= 1;
            }else{
                post = matriz1 % 10;
                matriz1 /= 10;
                p = matriz1 % 10;
                matriz1 /= 10;
                q = matriz1 % 10;
                matriz1 /= 10;
                break;
            }

        }
        printf("%d %d %d\n", p, q, post);
        int n3 = 0;
        printf("%d %d\n", pos1[2], pos2[2]);
        for(int i = 0; i < p; i++){
            for(int k = 0; k < q; k++){
                if(i == pos1[n3] && k == pos2[n3]){
                    matriz2[i][k] = '0';
                    fputc(matriz2[i][k], arq2);
                    fputc(' ', arq2);
                    n3 += 1;
                }else{
                    matriz2[i][k] = '1';
                    fputc(matriz2[i][k], arq2);
                    fputc(' ', arq2);
                }
            }fputc('\n', arq2);
        }

    }else{
        printf("Arquivo não encontrado!");
    }

    fclose(arq1);

    return 0;
}