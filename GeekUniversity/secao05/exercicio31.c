#include <stdio.h>


int main(){

	int i;
	double soma = 0.0, cont = 0.0;

	for(i = 1; i <= 99; i++){

		if(i % 2 != 0){

			cont += 1.0;
			soma += i / cont;

		}

	}printf("%.5lf", soma);

	return 0;

}
