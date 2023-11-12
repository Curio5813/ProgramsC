#include <stdio.h>


int main(){

	int i, n, cont1 = 0, cont2 = 1;
	double soma = 0.0, fat = 1.0;

	for(i = 0; i < 10; i++){
		if(i % 2 == 0){

			while(cont2 <= i){

				fat *= cont2;
				cont2 += 1;

			}soma += (cont1 / fat);
			cont1 += 1;

		}fat = 1.0;
		cont2 = 1;

	}printf("A soma da série até o quinto termo é %.5lf\n", soma);

	return 0;

}
