#include <stdio.h>


int main(){

	int i, n, cont = 1;
	double soma = 1.0, fat = 1.0;


	printf("Digite um número inteiro positivo: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++){

		while(cont <= i){

			fat *= cont;
			cont += 1;

		}soma += (1 / fat);
		fat = 1.0;
		cont = 1;

	}printf("A soma da série até o número %d é %.7lf\n", n, soma);
	printf("É uma série convergente que converge para o número de Euler.");

	return 0;
}
