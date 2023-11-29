//
// Created by marcos on 29-11-2023.
//
#include <stdio.h>
#include <stdlib.h>


int main(){

    FILE * arq;
    int tam = 4, cont = 0;
    float notas[tam];
    char aluno[tam][10], str[20];

    arq = fopen("texto21.txt", "w");

    printf("Disciplina de Matemática\n");
    for(int i = 0; i < tam; i++){
        printf("Qual o nome do aluno: ");
        scanf("%s", &aluno[i][10]);

    }printf("\n");
    for(int i = 0; i < tam; i++) {
        printf("Qual a nota final do %dº aluno: ", i + 1);
        scanf("%f", &notas[i]);

    }while(cont < tam){
        cont += 1;
        fputs(aluno[cont], arq);
        fputc('\t', arq);
        fputc('\t', arq);
        gcvt(notas[cont - 1], 4, str);
        fputs(str, arq);
        fputc('\n', arq);
    }
    fclose(arq);

    return 0;
}
