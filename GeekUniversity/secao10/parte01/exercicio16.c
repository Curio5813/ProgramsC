#include <stdio.h>
#include <stdlib.h>


int multiplicando_varias_vezes(int *a, int *b, int *c, int *d){

	*(b) = *(a) * 2;
	*(c) = *(a) * 3;
	*(d) = *(a) * 4;

}

int main(){

	int a, b, c, d;

	printf("Digite um numero inteiro: ");
	scanf("%d", &a);
	printf("\n");

	multiplicando_varias_vezes(&a, &b, &c, &d);

	printf("O dobro, o triplo e o quádruplo de %d são respectivamente %d %d %d: ", a, b, c, d);

	return 0;

}
