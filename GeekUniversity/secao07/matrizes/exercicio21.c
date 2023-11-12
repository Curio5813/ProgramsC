#include <stdio.h>


int main(){

	int m1[2][2], m2[2][2], m3[2][2], constante, n1 = 0, n2 = 0;
	char opcao[5];

	while(n1 < 2){

		for(int i = 0; i < 2; i++){

			for(int k = 0; k < 2; k++){

				if(n1 == 0){

					printf("Digite um número para %dº linha e %dº coluna da %dº matriz: ", i + 1, k + 1, n1 + 1);
					scanf("%d", &m1[i][k]);

				}else if(n1 == 1){

					printf("Digite um número para %dº linha e %dº coluna da %dº matriz: ", i + 1, k + 1, n1 + 1);
					scanf("%d", &m2[i][k]);


				}


			}

		}printf("\n");
		n1 += 1;

	}printf("\n");
	while(opcao[0] != 's'){
		printf("Digite uma opção:\n"
					"[a] -> Somar as duas matrizes;\n"
					"[b] -> Subtrair a primeira matriz da segunda;\n"
					"[c] -> Adicionar uma constante as duas matrizes;\n"
					"[d] -> Imprimir as matrizes;\n"
					"[s] -> Sair;\n");
		scanf("%s", &opcao[0]);
		printf("\n");

		if(opcao[0] == 'a'){

			for(int i = 0; i < 2; i++){

				for(int k = 0; k < 2; k++){

					m3[i][k] = m1[i][k] + m2[i][k];

				}

			}

		}else if(opcao[0] == 'b'){

			for(int i = 0; i < 2; i++){

				for(int k = 0; k < 2; k++){

					m3[i][k] = m1[i][k] - m2[i][k];

				}

			}

		}else if(opcao[0] == 'c'){

			printf("Qual o valor da constante? ");
			scanf("%d", &constante);

			for(int i = 0; i < 2; i++){

				for(int k = 0; k < 2; k++){

					m1[i][k] = m1[i][k] + constante;
					m2[i][k] = m2[i][k] + constante;
					m3[i][k] = m3[i][k] + constante;

				}

			}

		}else if(opcao[0] == 'd'){

			while(n2 < 3){

				if(n2 == 0){

					for(int i = 0; i < 2; i++){

						for(int k = 0; k < 2; k++){

							printf("%2d ", m1[i][k]);

						}printf("\n");

					}printf("\n");

				}else if(n2 == 1){

					for(int i = 0; i < 2; i++){

						for(int k = 0; k < 2; k++){

							printf("%2d ", m2[i][k]);

						}printf("\n");

					}printf("\n");

				}else if(n2 == 2){

					for(int i = 0; i < 2; i++){

						for(int k = 0; k < 2; k++){

							printf("%2d ", m3[i][k]);

						}printf("\n");

					}printf("\n");

				}n2 += 1;

			}

		}printf("\n");

	}

	return 0;

}
