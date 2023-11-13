//
// Created by marcos on 13-11-2023.
//
#include <stdio.h>
#include <string.h>


int main(){

    FILE *arq;
    int ch = 0, pal = 0, lin = 0, cont = 0;
    char texto[1000][1000], c;

    arq = fopen("texto11.txt", "r");

    if(arq){
        c = getc(arq);
        while(fscanf(arq, "%s", texto[cont]) != EOF && fscanf(arq, "%c", &c) != EOF){
            ch += 1;
            if(c == ' ' || c == '\n'){
                pal += 1;
            }if(c == '\n'){
                lin += 1;
            }
        }printf("O arquivo tem %d carateres %d palavras e %d linhas\n", ch, pal, lin);

    }else{
        printf("Arquivo não encontrado!");
    }

    fclose(arq);

    return 0;
}