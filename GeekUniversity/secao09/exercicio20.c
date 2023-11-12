#include <stdio.h>


int n, fat = 1;

int fatorial(){

	printf("Digite um número inteiro maior ou igual a zero: ");
	scanf("%d", &n);

	for(int i = n; i >= 1; i--){

		fat *= i;

	}printf("%d", fat);

}


int main(){

	fatorial();

	return 0;

}
