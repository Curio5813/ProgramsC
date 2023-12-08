//
// Created by marcos on 06-12-2023.
//
#include <stdio.h>
#include <string.h>


struct st_alunos{
    char nome[50];
    int matricula;
    char curso[50];
}alunos[5];


int main(){

    for(int i = 0; i < 5; i++){
        printf("Informe o nome do %dº aluno: ", i + 1);
        fgets(alunos[i].nome, 50, stdin);
        printf("Informe o número de matŕicula: ");
        scanf("%d", &alunos[i].matricula);
        getchar();
        printf("Informe o curso do aluno: ");
        fgets(alunos[i].curso, 50, stdin);

    }
    printf("\n");

    for(int i = 0; i < 5; i++){
        printf("================= DADOS DO %dº ALUNO ===================\n", i + 1);
        printf("Aluno: %s\n", strtok(alunos[i].nome, "\n"));
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n", strtok(alunos[i].curso, "\n"));
    }

    return 0;
}