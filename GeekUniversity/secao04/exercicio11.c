#include <stdio.h>


int main(){

	int num, resto, cont;

	cont = 0;

	printf("Digite um número maior que zero: ");
	scanf("%d", &num);

	if(num <= 0){

		printf("Número inválido!");

	}else if(num > 0){

		while(num > 0){

			resto = num % 10;
			cont += resto;
			num /= 10;

		}

	}printf("%d", cont);

}
