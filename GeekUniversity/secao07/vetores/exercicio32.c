#include <stdio.h>


int main(){

	int x[5], y[5], soma[5], dif[5], prod[5], intersc[5], uniao[10], n1 = 0, n2 = 0;

	for(int i = 0; i < 5; i++){

		printf("Digite o %dº numeroa para x e outro para y: ", i + 1);
		scanf("%d %d", &x[i], &y[i]);

	}for(int i = 0; i < 5; i++){

		soma[i] = x[i] + y[i];
		dif[i] = x[i] - y[i];
		prod[i] = x[i] * y[i];

		if(x[i] == y[i]){

			intersc[i] = x[i];
			n1 += 1;

		}uniao[n2] = x[i];
		uniao[n2 + 1] = y[i];
		n2 += 2;

	}printf("O vetor Soma é:\n");
	for(int i = 0; i < 5; i++){

		printf("%d ", soma[i]);

	}printf("\n");
	printf("O vetor Diferença é:\n");
	for(int i = 0; i < 5; i++){

		printf("%d ", dif[i]);

	}printf("\n");
	printf("O vetor Produto é:\n");
	for(int i = 0; i < 5; i++){

		printf("%d ", prod[i]);

	}printf("\n");
	printf("O vetor Intersecão é:\n");
	if(n1 == 0){

		printf("Os vetores x e y não tem elementos em comum.");

	}

	for(int i = 0; i < n1; i++){

		printf("%d ", intersc[i]);

	}printf("\n");
	printf("O vetor União é é:\n");
	for(int i = 0; i < 10; i++){

		printf("%d ", uniao[i]);

	}

	return 0;

}
