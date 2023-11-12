#include <stdio.h>


void fatorial_quadruplo(){

	long long int n = 1, num1, num2, fat_qatr;

	double fat1, fat2 = 1;

	printf("Digite um número inteiro para calcular o seu fatorial quádruplo: ");
	scanf("%lld", &num1);
	printf("\n");

	num2 = 2 * num1;

	while(n <= num2){
		fat2 *= n;
		if(n == num1){
			fat1 = fat2;
		}
		n += 1;



	}fat_qatr = fat2 / fat1;

	printf("O fatorial quádruplo de %lld é %lld.", num1, fat_qatr);

}

int main(){

	fatorial_quadruplo();

	return 0;

}
