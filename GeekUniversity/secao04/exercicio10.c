#include <stdio.h>
#include <stdlib.h>


int main(){

	float altura, peso;
	char sexo;

	altura = 0;
	peso = 0;


	printf("Digite a altura da pessoa (em metros): ");
	scanf("%f", &altura);
	printf("Digite o sexo da pessoa (M = Masculino ou F = Feminino: ");
	scanf(" %c", &sexo);
	printf("\n");

	if(sexo == 'F'){

		peso = (62.1 * altura) - 44.7;
		printf("O peso ideal da pessoa é de %.2f Kg", peso);


	}else if(sexo == 'M'){

		peso = (72.7 * altura) - 58;
		printf("O peso ideal da pessoa é de %.2f Kg", peso);

	}

	return 0;

}
