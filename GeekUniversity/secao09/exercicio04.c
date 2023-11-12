#include <stdio.h>

int num;

int quadrado_perfeito(){

    printf("Digite um número: ");
    scanf("%d", &num);
    
    for(int i = 2; i <= 10000000; i++){

        if(i * i == num){
            printf("O número %d é um quadrado perfeito.\n\n\n\n", num);
            break;

        }else if(i == 1000000){
            printf("O número %d não é um quadrado perfeito.\n\n\n\n", num);

        }

    }

}

int main(){

    quadrado_perfeito();

    return 0;

}
