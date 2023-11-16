//
// Created by marcos on 16-11-2023.
//
#include <stdio.h>


int main(){

    FILE *arq1, *arq2;
    int cont = 0, ch, n = 0, tam = 20;
    char doc1[30], doc2[30], ano[tam];

    printf("Qual o ano atual? ");
    scanf("%d", &ano);
    printf("Qual o nome do arquivo de entrada? ");
    scanf("%s", &doc1);
    printf("Qual o nome do arquivo de saída? ");
    scanf("%s", &doc2);

    arq1 = fopen(doc1, "r");

    if(arq1){
        while((ch = fgetc(arq1)) != EOF){
            if(ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5'
            || ch == '6' || ch == '7' || ch == '8' || ch == '9' || ch == '\n'){
                if(ch == '\n'){
                    ch = ' ';
                }
                ano[n] = ch;
                n++;
            }
        }

    }else{
        printf("Arquivo não econtrado!");

    }fclose(arq1);

    printf("%s", ano);

    return 0;
}