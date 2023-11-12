#include <stdio.h>



int main(){

	double peso, altura, imc;

	printf("Qual o peso e a altura da pessoa? ");
	scanf("%lf %lf", &peso, &altura);

	imc = peso / (altura * altura);


	if(imc <= 18.5){

		printf("Abaixo do peso.");

	}else if(18.6 <= imc && imc <= 24.9){

		printf("Saudável.");

	}else if(25.0 <= imc && imc <= 29.9){

		printf("Peso em excesso.");

	}else if(30.0 <= imc && imc <= 34.9){

		printf("Obesidade Grau I.");

	}else if(35.0 <= imc && imc <= 39.9){

		printf("Obesidade Grau II (severa).");

	}else if(imc >= 40.0){

		printf("Obesidade Grau III (mórbida).");

	}

}
