//
// Created by marcos on 13-11-2023.
//
#include <stdio.h>
#include <string.h>


int main(){

    FILE *arq;
    int c = 0, pal = 0, lin = 0, cont = 0;
    char ch;

    arq = fopen("texto11.txt", "r");

    if(arq){
        while((ch = fgetc(arq)) != EOF){
            c += 1;
            if(ch == ' ' || ch == '\n'){
                pal += 1;
            }if(ch == '\n'){
                lin += 1;
            }
        }printf("O arquivo tem %d carateres %d palavras e %d linhas\n", c, pal, lin);

    }else{
        printf("Arquivo não encontrado!");
    }

    fclose(arq);

    return 0;
}