//
// Created by marcos on 27-11-2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    FILE * arq;
    int tam = 3;
    float notas[tam];
    char aluno[tam + 1][10], linha[1000];

    arq = fopen("texto20.txt", "w");

    aluno[0][10] = '\0';


    printf("Disciplina de Matemática\n");
    for(int i = 1; i <= tam + 1; i++){
        printf("Qual o nome do aluno: ");
        scanf("%s", &aluno[i][10]);

    }aluno[tam + 1][10] = '\0';
    printf("\n");
    for(int i = 0; i < tam; i++){
        printf("Qual a nota final do %dº aluno: ", i + 1);
        scanf("%f", &notas[i]);

    }for(int i = 1; i <= tam + 1; i++){
        printf("%s\n", aluno[i]);
    }
    printf("\n");
    for(int i = 0; i < tam; i++) {
        printf("%.1f\n", notas[i]);
    }

    return 0;
}