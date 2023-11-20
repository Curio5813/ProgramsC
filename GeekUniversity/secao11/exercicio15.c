//
// Created by marcos on 16-11-2023.
//
#include <stdio.h>
#include <stdlib.h>


int main(){

    FILE *arq1, *arq2;
    int ch, n1 = 0, n2 = 0, tam = 12, anos1[3], atual;
    char doc1[30], doc2[30], ano[tam];;

    printf("Qual o ano atual? ");
    scanf("%d", &atual);
    printf("Qual o nome do arquivo de entrada? ");
    scanf("%s", &doc1);
    printf("Qual o nome do arquivo de saída? ");
    scanf("%s", &doc2);

    arq1 = fopen(doc1, "r");

    if(arq1){
        while((ch = fgetc(arq1)) != EOF) {
            if(ch == '\n'){
                n1 += 1;
            }
            if (ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5'
                || ch == '6' || ch == '7' || ch == '8' || ch == '9' != 0) {
                ano[n2] = '\0';
                ano[n2] += ch;
                n2++;
            }
        }
        char *ptr;

        long anos = strtol(ano, &ptr, 10);

        for(int i = n1; i >= 0; i--){
            anos1[i] = anos % 10000;
            anos /= 10000;

        arq2 = fopen(doc2, "w");

        }for(int i = 0; i <= n1; i++){
            if((int) (atual - anos1[i]) > 18){
                fputs("Maior de idade.", arq2);
                fputc('\n', arq2);
            }else if((int) (atual - anos1[i]) < 18){
                fputs("Menor de idade.", arq2);
                fputc('\n', arq2);
            }else{
                fputs("Entrando na maior idade.", arq2);
                fputc('\n', arq2);

            }

        }

    }else{
        printf("Arquivo não econtrado!");

    }fclose(arq1);
    fclose(arq2);

    return 0;
}