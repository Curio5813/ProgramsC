#include <stdio.h>


int main(){

	int i, nota, soma = 0;

	double media, cont = 0.0;

	printf("Insira uma nota: ");
	scanf("%d", &nota);

	while(10 <= nota & nota <= 20){

		soma += nota;
		cont += 1;

		printf("Insira uma nota: ");
		scanf("%d", &nota);

	}media = soma / cont;

	printf("A média do aluno foi %.2lf", media);

	return 0;

}
