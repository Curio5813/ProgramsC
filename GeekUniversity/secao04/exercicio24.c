#include <stdio.h>
#include <string.h>



int main(){

	char estado[2];
	float tmg, tsp, trj, tms, valor;

	printf("Qual o estado de destino será vendido o produto (Sigla)? ");
	scanf("%s", &estado);
	printf("Qual o valor do produto? ");
	scanf("%f", &valor);

	if(!strcmp(estado, "MG")){

		tmg = 0.07;
		valor *= (1 + tmg);
		printf("O valor do produto para %s sairá por R$ %.2f", estado, valor);

	}else if(!strcmp(estado, "SP")){

		tsp = 0.12;
		valor *= (1 + tsp);
		printf("O valor do produto para %s sairá por R$ %.2f", estado, valor);

	}else if(!strcmp(estado, "RJ")){

		trj = 0.15;
		valor *= (1 + trj);
		printf("O valor do produto para %s sairá por R$ %.2f", estado, valor);

	}else if(!strcmp(estado, "MS")){

		tms = 0.08;
		valor *= (1 + tms);
		printf("O valor do produto para %s sairá por R$ %.2f", estado, valor);

	}else{

		printf("Estado não encontrado!");

	}

	return 0;


}
