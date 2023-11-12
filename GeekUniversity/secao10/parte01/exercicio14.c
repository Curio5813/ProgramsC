#include <stdio.h>
#include <stdlib.h>


int aritmetica_de_ponteiros(int *v, int *a){

	v[0] = *(a);
	v[1] = *(a);
	v[2] = *(a);
	v[3] = *(a);
	v[4] = *(a);

}


int main(){

	int v[5], a = 1;


	aritmetica_de_ponteiros(&v, &a);

	for(int i = 0; i < 5; i++){

		printf("%d ", v[i]);

	}

	return 0;

}
