#include <stdio.h>


int maior(){

	int v[10], maior = 0;

	for(int i = 0; i < 10; i++){
		printf("Digite um numero inteiro: ");
		scanf("%d", &v[i]);
		if(v[i] > maior){

			maior = v[i];
		}

	}printf("\n");
	printf("O maior valor do vetor é %d", maior);


}


int main(){

	maior();

	return 0;

}
