#include <stdio.h>



int main(){

	int op, num1, num2, soma, sub, mult;
	float numf1, numf2, div;


	printf("Escolha uma das opções abaixo\n"
			"[1] => Soma de 2 números\n"
			"[2] => Diferença entre 2 números (maior pelo menor)\n"
			"[3] => Produto entre 2 números\n"
			"[4] => Divisão entre 2 números (o denominador não pode ser zero)\n"
			"Opção: ");
	scanf("%d", &op);


	if(op == 1){

		printf("Digite 2 números: ");
		scanf("%d %d", &num1, &num2);

		soma = num1 + num2;

		printf("A soma de %d mais %d é %d", num1, num2, soma);

	}else if(op == 2){

		printf("Digite 2 números: ");
		scanf("%d %d", &num1, &num2);

		if(num1 >= num2){

			sub = num1 - num2;

			printf("A diferença de %d por %d é %d", num1, num2, sub);

		}else if(num2 > num1){

			sub = num2 - num1;

			printf("A diferença de %d por %d é %d", num2, num1, sub);

		}

	}else if(op == 3){

		printf("Digite 2 números: ");
		scanf("%d %d", &num1, &num2);

		mult = num1 * num2;

		printf("A multiplicação entre %d por %d é %d", num1, num2, mult);

	}else if(op == 4){

		printf("Digite 2 números: ");
		scanf("%f %f", &numf1, &numf2);

		if(numf2 == 0){

			printf("O denominador não pode ser zero!");

		}else{

			div = numf1 / numf2;

			printf("A divisão de %.2f por %.2f é %.2f", numf1, numf2, div);
		}

	}

}
