#include <stdio.h>


int main(){

	int opcao = 9;
	double kmh, ms, velocidade;

	while(opcao != 0){

		printf("Escolha uma velocidade que deseja converter: \n"
				"[1] => km/h para m/s\n"
				"[2] => m/s para km/h\n"
				"[0] => Sair do programa.\n"
				"Opção: ");
		scanf("%d", &opcao);
		printf("\n");

		if(opcao == 1){

			printf("Digite uma velocidade em km/h: ");
			scanf("%lf", &kmh);

			velocidade = kmh/3.6;

			printf("A velocidade é de %.2lf m/s\n", velocidade);
			printf("\n");

		}else if(opcao == 2){

			printf("Digite uma velocidade em m/s: ");
			scanf("%lf", &ms);

			velocidade = ms * 3.6;

			printf("A velocidade é de %.2lf km/h\n", velocidade);
			printf("\n");

		}else if(opcao == 0){

			printf("Programa finalizado.");
			break;

		}

	}

	return 0;

}
