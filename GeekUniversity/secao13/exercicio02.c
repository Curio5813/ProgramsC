//
// Created by marcos on 18-12-2023.
//
#include <stdio.h>

int fat(int n){

    if(n <= 1){

        return 1;
    }

    return n * fat(n - 1);

}


int main(){

    int n = 1;

    printf("Digite qual numero deseja calcular o fatorial: ");
    scanf("%d", &n);

    printf("%d", fat(n));

    return 0;
}