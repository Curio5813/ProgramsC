#include <stdio.h>


int main(){

	float valor, total, desconto;

	desconto = 12;

	printf("Qual o valor do produto? $ ");
	scanf("%f", &valor);

	total = (100 - desconto) / 100;

	valor = total * valor;

	printf("O valor do produto é de: %f$", valor);


	return 0;

}
