//
// Created by marcos on 02-01-2024.
//
#include <stdio.h>
#include <stdlib.h>


int main(){

    int *array, qt;

    array = (int*) malloc(3 * sizeof(int));

    printf("Quantos valores inteiros deseja informar: ");
    scanf("%d", &qt);

    if(qt > 3){
        array = (int*) realloc(array, qt * sizeof(int));
        for(int i = 0; i < qt; i++){
            printf("Informe o %dº valor inteiro: ", i + 1);
            scanf("%d", &array[i]);
            }
    }else{
        for(int i = 0; i < qt; i++){
            printf("Informe o %dº valor inteiro: ", i + 1);
            scanf("%d", &array[i]);
        }
    }

    printf("Os números informados foram: ");
    for(int i = 0; i < qt; i++){
        printf("%d ", array[i]);
    }

    free(array);
    array = NULL;

    return 0;
}