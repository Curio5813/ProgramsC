#include <stdio.h>


int main(){

	int v[10], aux;

	for(int i = 0; i < 10; i++){

		printf("Digite o %2dº numero: ", i + 1);
		scanf("%d", &v[i]);

	}for(int i = 0; i < 10; i++){

		for(int k = 0; k < 10; k++){

			if(k < 6){

				if(v[k] > v[k + 1]){

					aux = v[k];
					v[k] = v[k + 1];
					v[k + 1] = aux;

				}

			}else if(k >= 6){

				if(v[k + 1] > v[k]){

					aux = v[k + 1];
					v[k + 1] = v[k];
					v[k] = aux;

				}

			}

		}

	}for(int i = 0; i < 10; i++){

		printf("%d ", v[i]);

	}

	return 0;

}
