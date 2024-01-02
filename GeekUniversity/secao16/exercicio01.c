//
// Created by marcos on 02-01-2024.
//
#include <stdio.h>
#include <stdlib.h>


int main(){

    int *array, qt = 5;

    array = (int*) malloc(qt * sizeof(int));

    for(int i = 0; i < 5; i++){
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Os numeros no array foram: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }
    free(array);
    array = NULL;

    return 0;
}