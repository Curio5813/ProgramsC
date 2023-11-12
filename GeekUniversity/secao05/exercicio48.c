#include <stdio.h>


int main(){

	int  i, a = 0, b = 1, p = 1, soma = 0;

	for(i = 0; i <= 1000; i++){

		if(a >= 4000000){

			break;

		}


		if(a % 2 == 0){

			soma += a;

		}

		a = b;
		b = p;
		p = a + b;


	}printf("%d", soma);

	return 0;

}
