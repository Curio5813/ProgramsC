#include <stdio.h>


void fatorial_duplo(){

	long long int fat = 1, n = 1, num;

	printf("Digite um numero inteiro para calcular o fatorial duplo desse numero: ");
	scanf("%lld", &num);
	printf("\n");

	while(n <= num){
		if(n % 2 != 0){
			fat *= n;
		}n += 1;

	}printf("O fatorial duplo de %lld!! é %lld", num, fat);

}


int main(){

	fatorial_duplo();

	return 0;

}
