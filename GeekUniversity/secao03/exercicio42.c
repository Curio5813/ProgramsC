#include <stdio.h>


int main(){

	float salario, bonus, ir;

	bonus = 0.05;
	ir = 0.07;

	printf("Qual o valor do salário base do funcionário? ");
	scanf("%f", &salario);

	salario = salario * (1 + bonus - ir);

	printf("O salário a receber é igual a: $ %f", salario);


	return 0;


}
