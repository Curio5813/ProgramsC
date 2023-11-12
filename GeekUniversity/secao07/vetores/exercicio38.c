#include <stdio.h>


int main(){

	int v[10], aux;

	for(int i = 0; i < 10; i++){

		printf("Digite o %2dº numero: ", i + 1);
		scanf("%d", &v[i]);

		}for(int j = 0; j < 10; j++){

			for(int k = 0; k < 10; k++){

				if(v[k] > v[k + 1]){

					aux = v[k];
					v[k] = v[k + 1];
					v[k + 1] = aux;

				}

			}

	}for(int i = 0; i < 10; i++){

		printf("%d ", v[i]);

	}

	return 0;

}
