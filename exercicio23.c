//
// Created by marcos on 04-12-2023.
//
#include <stdio.h>


int main(){
    FILE *arq;
    char linhas[1000][1000], prof[30], tempo[5];


    arq = fopen("exercicio23.txt", "w");

    if(arq){
        for(int i = 0; i < 5; i++){
            printf("Qual a profissão e tempo de serviço? ");
            scanf("%s" "%s", &prof, &tempo);
            fprintf(arq, "%s" "\t" "%s", prof, tempo);
            fputs("\n", arq);
        }

    }else{
       printf("Arquivo não encontrado!");
    }

    fclose(arq);

    return 0;
}