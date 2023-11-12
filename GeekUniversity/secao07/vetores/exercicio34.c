#include <stdio.h>


int main(){

	int v[10], aux, n1 = 0, k = 0;

	for(int i = 0; i < 50; i++){

		if(n1 == 10){

			break;

		}

		printf("Digite um número: ");
		scanf("%d", &aux);

		for(int k = 1; k < 10; k++){

			while(aux == v[k]){

				printf("\n");
				printf("Digite um número diferente: ");
				scanf("%d", &aux);

				for(int j = 0; j < 10; j++){

				}

			}if(k == 9){

				k += 1;

			}if(k >= 9){

				v[n1] = aux;
				n1 += 1;
				break;

			}

		}

	}for(int i = 0; i < n1; i++){

		printf("%d ", v[i]);

	}

	return 0;

}
