#include <stdio.h>


int main(){

	float salario, prestacao, percentual;

	printf("Qual o salário do trabalhador e a valor da prestação do empréstimo: ");
	scanf("%f %f", &salario, &prestacao);

	percentual = prestacao / salario;

	percentual *= 100;

	printf("O valor da prestação corresponde à %.2f porcento do salário do trabalhador.\n", percentual);

	if(percentual > 20){

		printf("Empréstimo não concedido.");

	}else if(percentual <= 20){

		printf("Empréstimo concedido.");
	}

}
