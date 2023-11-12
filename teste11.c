//
// Created by marcos on 12-11-2023.
//
#include <stdio.h>

int main(){

    FILE *arquivo = fopen("/home/marcos/Computacao/ProgramsC/Program/texto11.txt", "r");

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1; // Ou qualquer valor de retorno apropriado
    }

// Se o arquivo foi aberto com sucesso, continue o processamento aqui

    fclose(arquivo);


    return 0;
}