#include <stdio.h>
#include <stdlib.h>


int maior_endereco(int *n1, int *n2, int p1, int p2){

	if(p1 > p2){

		return printf("O endereço de memória do número %d é maior do que do número %d\n", *(n1), *(n2));

	}else if(p2 > p1){

		return printf("O endereço de memória do número %d é maior do que do número %d\n", *(n2), *(n1));

	}

}


int main(){

	int n1, n2;

	printf("Digite um número inteiro: ");
	scanf("%d", &n1);
	printf("Digite outro número inteiro: ");
	scanf("%d", &n2);
	printf("\n");

	int *p1 = &n1, *p2 = &n2;

	printf("O endereço de memória do número %d é %p1\n", n1, p1);
	printf("O endereço de memória do número %d é %p2\n", n2, p2);
	printf("\n");

	maior_endereco(&n1, &n2, p1, p2);

	return 0;

}
