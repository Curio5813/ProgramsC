#include <stdio.h>


int main(){

	int i, a, b, soma = 0;

	printf("Digite o valor inicial e o valor final do intervalo: ");
	scanf("%d %d", &a, &b);

	if(a < b){

		for(i = a; i <= b; i++){

			if(i % 2 != 0){

				soma += i;

			}

		}printf("A soma dos números ímpares neste intervalo é %d", soma);

	}else{

		printf("Intervalo de valores inválidos.");

	}

	return 0;

}
