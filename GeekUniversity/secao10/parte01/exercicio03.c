#include <stdio.h>
#include <stdlib.h>


int endereco_de_memoria(int *n1, int *n2, int p1, int p2){

	if(p1 > p2){
		return printf("O número que está no maior endereço de memória é o %d", *(n1));

	}else if(p1 < p2){
		return printf("O número que está no maior endereço de memória é o %d", *(n2));

	}

}


int main(){

	int n1, n2;

	printf("Digite dois números inteiros: ");
	scanf("%d %d", &n1, &n2);
	printf("\n");

	int *p1 = &n1, *p2 = &n2;

	printf("O endereço de memória do número %d é %p1\ne do número %d é %p2", n1, p1, n2, p2);
	printf("\n\n");

	printf("Digite os dois endereços obtidos por cada variável: ");
	scanf("%d %d", p1, p2);
	printf("\n");

	endereco_de_memoria(&n1, &n2, p1, p2);

	return 0;

}
