#include <stdio.h>


int main(){

	int nota[10][3], menor = 999999, provas[3], pior, piores[10];

	for(int i = 0; i < 10; i++){

		for(int k = 0; k < 3; k++){

			printf("Digite o valor da %dº prova do %dº aluno: ", k + 1, i + 1);
			scanf("%d", &provas[k]);

			if(provas[k] < menor){

				menor = provas[k];
				pior = k + 1;

			}

		}piores[i] = pior;
		menor = 9999999;
		printf("\n");

	}for(int i = 0; i < 10; i++){

		printf("A pior prova do %2dº aluno foi a %dº prova\n", i + 1, piores[i]);

	}

	return 0;

}
