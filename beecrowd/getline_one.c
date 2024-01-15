//
// Created by marcos on 15-01-2024.
//
#include <stdio.h>
#include <stdbool.h>


int main (){
    char amigo[200], c = '\n';
    double media;

    while((scanf("%s", amigo)) != EOF){
        int distancia, soma = 0, i = 0;

        while(true) {
            fgets(amigo, 200, stdin);
            scanf("%d", &distancia);
            soma += distancia;
            i++;
            fgets(amigo, 200, stdin);
            if((char) amigo[0] == c){
                media = (double)soma / (double)i;
                printf ("%d", soma);
                break;
            }

        }


    }


    return 0;
}