#include <stdio.h>


int main(){

	int a[10], b[10], c[10];

	for(int i = 0; i < 10; i++){

		printf("Digite o %dº numero para o vetor 'a' e o %dº numero para o vetor 'b': ", i + 1, i + 1);
		scanf("%d %d", &a[i], &b[i]);

		c[i] = a[i] - b[i];

	}for(int i = 0; i < 10; i++){

		printf("%d\n", c[i]);

	}

	return 0;

}
