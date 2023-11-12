#include <stdio.h>


int main(){

	int valor, i, soma = 0;

	for(i = 1; i <= 10; i++){

		printf("Informe o %dº valor: ", i);
		scanf("%d", &valor);

		soma += valor;

	}printf("%d", soma);

	return 0;

}
