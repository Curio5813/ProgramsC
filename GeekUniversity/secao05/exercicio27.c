#include <stdio.h>


int main(){

	int i, n = 0;

	float cont = 1.0, fracao, h;

	printf("Digite um número: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++){

		fracao = 1 / cont;

		h += fracao;

		cont += 1.0;

	}printf("A série harmônica é %.2lf", h);

	return 0;

}
