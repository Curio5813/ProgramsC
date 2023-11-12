#include <stdio.h>


int main(){

	int num, cont1 = 0, cont2 = 0;

	while(num != 1000){

		printf("Informe um número: ");
		scanf("%d", &num);

		if(num % 2 == 0){

			cont2 += 1;

		}cont1 += 1;

	}printf("Foram lidos %d números e %d são pares.", cont1, cont2);

	return 0;

}
