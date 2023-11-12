#include <stdio.h>


void algarismo_fatorial(){

	long long int fat = 1, n = 1, num, resto, soma = 0;

	printf("Digite um numero inteiro para calcular seu fatorial: ");
	scanf("%lld", &num);
	printf("\n");

	while(n <= num){
		fat *= n;
		n += 1;

	}while(fat > 0){
		resto = fat % 10;
		soma += resto;
		fat /= 10;

	}printf("A soma dos algarismo do %lld! é %lld.", num, soma);

}


int main(){

	algarismo_fatorial();

	return 0;

}
