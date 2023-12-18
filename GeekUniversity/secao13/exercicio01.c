//
// Created by marcos on 18-12-2023.
//
#include <stdio.h>

int somatorio(int n){

    if(n <= 1){
        return n;
    }

    return n + somatorio(n - 1);
}

int main(){

    int n = 1;

    printf("Qual o numero você deseja somar de 1 à n: ");
    scanf("%d", &n);

    printf("%d", somatorio(n));

    return 0;
}
