#include <stdio.h>


int main(){

	int multi[10], x;

	printf("Digite um número inteiro: ");
	scanf("%d", &x);

	for(int i = 0; i < 10; i++){

		multi[i] = (i + 1) * x;

	}for(int i = 0; i < 10; i++){

		printf("%d ", multi[i]);

	}

	return 0;
}
