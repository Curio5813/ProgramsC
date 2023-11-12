#include <stdio.h>


int main(){

	int num, i, soma = 0;
	float media;

	for(i = 1; i <= 10; i++){

		printf("Digite %iº numero: ", i);
		scanf("%d", &num);

		soma += num;

	}media = soma / 10.0;
	printf("A média é igual a %.2f", media);

	return 0;

}
