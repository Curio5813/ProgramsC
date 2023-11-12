#include <stdio.h>

int dobro(int num){
    return num * 2;

}

int main(){

    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("Resultado = %d", dobro(n));

    printf("\n\n");

    return 0;

}