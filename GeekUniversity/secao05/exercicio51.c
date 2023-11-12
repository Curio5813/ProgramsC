#include <stdio.h>


int main(){

	int i;

	double salario = 2000.00, taxa = 0.015, aumento;

	for(i = 1; i <= 16; i++){

		aumento += 2000 * taxa;
		salario += aumento;
		taxa *= 1.25;
		printf("%.6lf\n", taxa);

	}printf("O salário atual do funcionário é de R$ %.2lf", salario);

	return 0;

}
