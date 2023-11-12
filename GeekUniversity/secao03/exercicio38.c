#include <stdio.h>


int main(){

	float salario, aumento;

	aumento = 1.25;

	printf("Qual o salário do funcionário? $ ");
	scanf("%f", &salario);

	salario *= aumento;

	printf("O funcionário passará a ganhar $ %f ", salario);


	return 0;

}
