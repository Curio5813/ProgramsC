#include <stdio.h>
#include <stdlib.h>


int enderecos_pares(int *v){

	for(int i = 0; i < 5; i++){

		if(v[i] % 2 == 0){

			int *p = &v[i];

			printf("%p\n", p);
		}

	}

}


int main(){

	int v[5];

	for(int i = 0; i < 5; i ++){

		printf("Digite o %dº valor do array: ", i + 1);
		scanf("%d", &v[i]);

	}printf("\n");

	printf("Os endereços na memória dos números pares são:\n\n");

	enderecos_pares(&v);

	return 0;

}
