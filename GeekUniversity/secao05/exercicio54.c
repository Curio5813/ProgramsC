#include <stdio.h>


int main(){

	int i, n, num, cont = 0;

	scanf("%d", &n);

	while(cont < n){

		printf("Digite um número inteiro positivo e maior que 1: ");
		scanf("%d", &num);

		for(i = 2; i <= num; i++){

			if(num % i == 0 && i == num){

				printf("Prime\n");
				break;

			}else if(num % i == 0 && i != num){

				printf("Not Prime\n");
				break;

			}

		}cont += 1;

	}

	return 0;
}
