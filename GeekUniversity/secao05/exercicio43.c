#include <stdio.h>


int main(){

	int idade, soma = 0;
	double media, cont = 0.0;

	printf("Qual a idade da pessoa: ");
	scanf("%d", &idade);

	while(idade > 0){

		soma += idade;
		cont += 1.0;

		printf("Qual a idade da pessoa: ");
		scanf("%d", &idade);

	}media = (soma / cont);
	printf("A idade média do grupo é: %.2lf", media);

	return 0;

}
