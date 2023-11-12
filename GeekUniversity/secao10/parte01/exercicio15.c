#include <stdio.h>
#include <stdlib.h>


int array_e_ponteiros(int *v){

	int valor = 5;

	v[0] = valor;
	++valor;
	v[1] = valor;
	++valor;
	v[2] = valor;
	++valor;
	v[3] = valor;
	++valor;
	v[4] = valor;

}


int main(){

	int v[5];

	array_e_ponteiros(&v);

	for(int i = 0; i < 5; i++){

		printf("%d ", v[i]);

	}

	return 0;

}
