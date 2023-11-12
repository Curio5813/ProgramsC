#include <stdio.h>


int main(){

	int num;
	float l10;

	printf("Digite um número: ");
	scanf("%d", &num);

	if(num < 0){

		printf("Número inválido.");

	}else if(num >= 0){

		l10 = log10(num);
		printf("%f", l10);

	}

}
