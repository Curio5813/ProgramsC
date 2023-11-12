#include <stdio.h>


int main(){

	int num, i, maior = 0, menor = 0;

	for(i = 1; i <= 10; i++){

		printf("Digite o %dº numero: ", i);
		scanf("%d", &num);

		if(num >= maior){
			maior = num;

		}if(num <= menor){
			menor = num;

		}

	}printf("O maior número é %d e o menor número é %d", maior, menor);

}
