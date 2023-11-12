#include <stdio.h>


int main(){

	int i, num, soma = 0;

	printf("Digite um número: ");
	scanf("%d", &num);

	for(i = 1; i < num; i++){

		if(num % i == 0){

			printf("%d\n", i);
			soma += i;

		}

	}printf("A soma de seus divisores é %d", soma);

	return 0;

}
