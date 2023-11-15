//
// Created by marcos on 14-11-2023.
//
#include <stdio.h>


int main(){

    FILE *arq;
    char pessoa[50], tel[12];

    arq = fopen("texto13.txt", "w");

    if(arq){
        while(tel[0] != '0'){
            printf("Nome da pessoa e numero de telefone: ");
            scanf("%s %s", &pessoa, &tel);
            fputs(pessoa, arq);
            fputc('\t', arq);
            fputs(tel, arq);
            fputc('\n', arq);

        }

    }else{
        printf("Arquivo não encontrado!");

    }
    fclose(arq);

    return 0;
}