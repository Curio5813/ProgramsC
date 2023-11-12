#include <stdio.h>


int main(){

	int i, num, maior = 0, menor = 9999;


	while(num >= 0){

		printf("Digite um número inteiro: ");
		scanf("%d", &num);

		if(num < 0){

			break;

		}

		if(num >= maior){

			maior = num;

		}if(num <= menor){

			menor = num;

		}


	}printf("O maior número é %d e o menor número é %d", maior, menor);

	return 0;

}
