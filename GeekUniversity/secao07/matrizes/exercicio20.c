#include <stdio.h>


int main(){

	float m[3][6], soma_coluna, soma_impar = 0, soma2 = 0, soma4 = 0, media2, media4;

	for(int i = 0; i < 3; i++){

		for(int k = 0; k < 6; k++){

			printf("Digite o valor para %dº linha e %dº coluna: ", i + 1, k + 1);
			scanf("%f", &m[i][k]);

		}

	}for(int i = 0; i < 3; i++){

		for(int k = 0; k < 6; k++){

			if((k + 1) % 2 == 1){

				soma_impar += m[i][k];

			}else if(k == 1){

				soma2 += m[i][k];

			}else if(k == 3){

				soma4 += m[i][k];

			}soma_coluna = m[i][0] + m[i][1];
			m[i][5] = soma_coluna;

		}

	}printf("\n\n");
	media2 = soma2 / 3.0;
	media4 = soma4 / 3.0;

	printf("%.0f\n", soma_impar);
	printf("%.1f %.1f\n\n", media2, media4);

	for(int i = 0; i < 3; i++){

		for(int k = 0; k < 6; k++){

			printf("%2.0f ", m[i][k]);

		}printf("\n");

	}

	return 0;

}

