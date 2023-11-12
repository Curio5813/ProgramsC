#include <stdio.h>



int main(){

	double fabrica,consumidor;

	printf("Custo de fábrica do carro novo: R$ ");
	scanf("%lf", &fabrica);

	if(fabrica <= 12000){

		consumidor = fabrica * 1.05;
		printf("O custo ao consumidor do veículo é de R$%.2lf", consumidor);

	}else if(fabrica > 12000 && fabrica <= 25000){

		consumidor = fabrica * 1.25;
		printf("O custo ao consumidor do veículo é de R$%.2lf", consumidor);

	}else if(fabrica > 25000){

		consumidor = fabrica * 1.35;
		printf("O custo ao consumidor do veículo é de R$%.2lf", consumidor);

	}

	return 0;

}
