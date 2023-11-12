#include <stdio.h>


int main(){

	float horas_trabalho, horas_trabalhadas, valor, adicional;

	horas_trabalho = 50.00;
	adicional = 0.10;


	printf("Quantas horas foram trabalhadas no mês? ");
	scanf("%f", &horas_trabalhadas);


	valor = horas_trabalho * horas_trabalhadas * (1 + adicional);

	printf("Valor pago ao trabalhador %f $ ", valor);


	return 0;


}
