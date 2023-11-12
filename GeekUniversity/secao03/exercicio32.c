#include <stdio.h>


int main(){

	int num, soma;

	printf("Digite um núemro inteiro: ");
	scanf("%d", &num);

	soma = (num + 1) * 3 + (num - 1) * 2;

	printf("A soma é %d", soma);


	return 0;
}
