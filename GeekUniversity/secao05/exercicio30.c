#include <stdio.h>


int main(){

	int i, n, soma1 = 0, soma2 = 0, soma3 = 0;

	printf("Digite um número: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++){

		soma1 += i;

		if(i % 2 != 0){

			soma2 += i;
			soma3 += i;

		}else if(i % 2 == 0){

			soma2 += -i;

		}

	}printf("As soma são %d %d %d", soma1, soma2, soma3);

	return 0;

}
