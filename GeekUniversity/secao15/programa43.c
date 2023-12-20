#include <stdio.h>

int main(){
	int num1, num2, soma;

	printf("Informe o num1: ");
	fflush(stdout);
	scanf("%d", &num1);

	printf("Informe o num2: ");
	fflush(stdout);
	scanf("%d", &num2);

	soma = num1 + num2;

	printf("A soma de %d com %d é %d", num1, num2, soma);

	return 0;
}
