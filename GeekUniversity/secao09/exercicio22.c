#include <stdio.h>


int aux = 1, n, cont = 0;

char inter[100];

int interrogacao(){

	printf("Digite um número para n: ");
	scanf("%d", &n);

	while(cont < n){

		for(int i = 0; i < aux; i++){
			printf("!");

		}printf("\n");
		cont += 1;
		aux += 1;

	}

}


int main(){

	interrogacao();

	return 0;

}
