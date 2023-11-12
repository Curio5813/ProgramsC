#include <stdio.h>


int main(){

	int i, a, b, x, soma = 0;

	printf("Digite dois números inteiros maior que 1: ");
	scanf("%d %d", &a, &b);

	x = a;

	for(i = a; i <= b; i++){

		if(a % i == 0 && i == a){

			a += 1;
			i = 2;
			soma += a;

		}else if(a % i == 0 && i != a || a != 2 && a % 2 == 0){

			a += 1;
			i = 2;

		}

	}printf("A soma dos números primos existentes entre %d e %d e %d", x, b, soma);

	return 0;

}
