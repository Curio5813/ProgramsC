#include <stdio.h>


void fatorial_exponencial(){

	long long int fat_e = 1, n = 1, num, v[10], a = 1;

	printf("Digite um numero inteiro para achar seu fatorial exponencial: ");
	scanf("%lld", &num);
	printf("\n");

	for(int i = 1; i < num; i++){
		fat_e = (pow(a , num - i));
		a = i;

	}printf("O fatorial exponencial de %lld é %lld", num, fat_e);

}


int main(){

	fatorial_exponencial();

	return 0;

}
