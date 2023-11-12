#include <stdio.h>


int main(){

	int i, soma1 = 0, soma2i, soma2f = 0, dif;

	for(i = 1; i <= 100; i++){

		soma1 += pow(i, 2);
		soma2i += i;

	}soma2f = pow(soma2i, 2);

	dif = soma2f - soma1;

	printf("A diferença entre a soma dos quadrados dos 100 primeiros \n"
			"números e o quadrado da soma é %d", dif);


	return 0;
}
