#include <stdio.h>


void sem_repeticao(){

	int v[10];

	for(int i = 0; i < 10; i++){
		printf("Digite um numero inteiro: ");
		scanf("%d", &v[i]);
		for(int k = 0; k < 10; k++){
			if(v[k] == v[i] && k != i){
				v[i] = NULL;
				printf("Este valor já tem no vetor!\n");
				printf("Digite um numero inteiro: ");
				scanf("%d", &v[i]);

			}

		}


	}printf("\n");
	for(int i = 0; i < 10; i++){
		printf("%d ", v[i]);

	}printf("\n");

}


int main(){

	sem_repeticao();

	return 0;

}




