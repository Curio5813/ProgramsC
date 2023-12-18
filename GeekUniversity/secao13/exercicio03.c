//
// Created by marcos on 18-12-2023.
//
#include <stdio.h>

int binario(int n){

    if(n == 0){

        return n;

    }else{
        return (n % 2 + 10 * binario(n / 2));
    }

}


int main(){

    int n; // 101

    printf("Digite um número para converter para binário: ");
    scanf("%d", &n);

    printf("O número %d em binário é %d", n, binario(n));

    return 0;
}
