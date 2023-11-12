#include <stdio.h>

int num;

int verificador(){

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if(num > 0){
        return printf("1");
    
    }else if(num < 0){
        return printf("-1");

    }else{
        return printf("0");

    }

}

int main(){

    verificador();

    printf("\n\n\n\n");

    return 0;

}
