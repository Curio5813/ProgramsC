//
// Created by marcos on 06-12-2023.
//
#include <stdio.h>
#include <string.h>

struct st_dados{
    char nome[50];
    int idade;
    char endereco[50];

}st_dados[3];


int main(){

    for(int i = 0; i < 3; i++){
        printf("Informe o nome da pessoa: ");
        fgets(st_dados[i].nome, 50, stdin);
        printf("Informe a idade da pessoa: ");
        scanf("%d", &st_dados[i].idade);
        getchar();
        printf("Informe o endereço da pessoa: ");
        fgets(st_dados[i].endereco, 50, stdin);
    }printf("\n");

    for(int i = 0; i < 3; i++){
        printf("============== DADOS DA %dº PESSOA ==============\n", i + 1);
        printf("Nome: %s\n", strtok(st_dados[i].nome, "\n"));
        printf("Idade %d\n", st_dados[i].idade);
        printf("Endereço %s\n", strtok(st_dados[i].endereco, "\n"));
    }

    return 0;
}