#include <stdio.h>


int main(){

	int i = 1, cont = 1, soma = 0;

	while(cont <= 50){

		i += 1;
		if(i % 2 == 0){

			soma += i;
			cont += 1;
		}

	}printf("%d", soma);

}
