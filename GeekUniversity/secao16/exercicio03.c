//
// Created by marcos on 02-01-2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    int tam;
    char *pal;

    printf("Informe o tamnho da string: ");
    scanf("%d", &tam);
    getchar();

    pal = (char*) malloc((tam + 1) * sizeof(char)); // + 1 porque o enter (\n) é um caractere.

    printf("Informe a string: ");
    fgets(pal, tam + 1, stdin);

    printf("A palavra digitada sem as vogais é: ");
    for(int i = 0; i < tam; i++){
        if(pal[i] != 'a' && pal[i] != 'e' && pal[i] != 'i' && pal[i] != 'o' && pal[i] != 'u' &&
        pal[i] != 'A' && pal[i] != 'E' && pal[i] != 'I' && pal[i] != 'O' && pal[i] != 'U'){
            printf("%c", pal[i]);
        }
    }
    free(pal);
    pal = NULL;

    return 0;
}