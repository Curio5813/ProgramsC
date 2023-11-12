#include <stdio.h>


int main(){

	int i;

	double carlos = 15000.00, joao, poupanca = 0.006, renda_fixa = 0.0073, j1, j2;

	joao = carlos / 3.0;

	for(i = 0; i <= 1500; i++){

		j1 = carlos * (pow((1 + poupanca), i)) - carlos;
		carlos += j1;
		printf("Carlos %.2lf\n", carlos);
		j2 = joao * (pow((1 + renda_fixa), i)) - joao;
		joao += j2;
		printf("João %.2lf\n", joao);


		if(joao >= carlos){

			printf("Os rendimentos de João será igual ou maior que que o de Carlos em %d meses.", i);

			break;
		}

	}

	return 0;

}
