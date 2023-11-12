#include <stdio.h>


int main(){

	float real, cotacao, dolares;

	printf("Qual o valor em real você quer converter? R$ ");
	scanf("%f", &real);
	printf("Qual a cotação do dia? ");
	scanf("%f", &cotacao);

	dolares = real / cotacao;

	printf("O valor em dólares é de US$ %f", dolares);


	return 0;

}
