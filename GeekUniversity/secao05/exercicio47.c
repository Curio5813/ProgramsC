#include <stdio.h>


int main(){

	int num1, num2, adicao, subtracao, multiplicacao, opcao = 0;
	double num3, divisao;

	while(opcao != 5){

		printf("Digite uma opção para: \n"
				"[1] -> Adição\n"
				"[2] -> Subtração\n"
				"[3] -> Multiplicação\n"
				"[4] -> Divisão\n"
				"[5] -> Saída\n"
				"opção: ");
		scanf("%d", &opcao);

		if(opcao == 1){

			printf("Digite 2 números para adicionar: ");
			scanf("%d %d", &num1, &num2);

			adicao = num1 + num2;

			printf("A soma dos números é igual a %d\n", adicao);

		}else if(opcao == 2){

			printf("Digite 2 números para subtrair: ");
			scanf("%d %d", &num1, &num2);

			subtracao = num1 - num2;

			printf("A subtração dos números é igual a %d\n", subtracao);

		}else if(opcao == 3){

			printf("Digite 2 números para multiplicar: ");
			scanf("%d %d", &num1, &num2);

			multiplicacao = num1 * num2;

			printf("A multiplicação dos números é igual a %d\n", multiplicacao);

		}else if(opcao == 4){

			printf("Digite 2 números para dividir: ");
			scanf("%d %lf", &num1, &num3);

			divisao = num1 / num3;

			printf("A divisão dos números é igual a %.2lf\n", divisao);

		}else if(opcao == 5){

			printf("Programa finalizado!");
			break;

		}printf("\n");

	}

	return 0;

}
