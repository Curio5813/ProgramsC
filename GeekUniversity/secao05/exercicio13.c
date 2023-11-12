#include <stdio.h>


int main(){

	int i, n;

	printf("Digite um número inteiro positivo par: ");
	scanf("%d", &n);

	for(i = 0; i <= n; i++){

		if(i % 2 == 0){

			printf("%d\n", i);

		}

	}

	return 0;

}
