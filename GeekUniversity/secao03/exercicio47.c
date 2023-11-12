#include <stdio.h>


int main(){

	int num, cont, inteira, base10;

	base10 = 1000;
	cont = 0;

	printf("Digite um número inteiro de 4 dígitos: ");
	scanf("%d", &num);

	for(cont = 0; cont < 4; cont ++){

		inteira = num / base10;
		printf("%d\n", inteira);
		num %= base10;
		base10 /= 10;
	}

}
