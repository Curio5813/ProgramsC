#include <stdio.h>


int main(){

	int i, num, resto;

	i = 0;

	printf("Digite um número de 3 dígitos de 100 a 999: ");
	scanf("%d", &num);

	for(i = 0; i < 3; i ++){

		resto = num % 10;
		printf("%d", resto);
		num /= 10;
	}


	return 0;

}
