#include <stdio.h>
#include <stdlib.h>


void frac(double *num, int *inteiro, double *fracao){

	int resto;

	*(inteiro) = *(num) / 1;
	*fracao = *(num) - *(inteiro);

}


int main(){

	double num, fracao;

	int inteiro;

	printf("Digite um número real sem ser inteiro: ");
	scanf("%lf", &num);
	printf("\n");

	frac(&num, &inteiro, &fracao);

	printf("A parte inteira é igual à %d e a fracionária igual à %lf", inteiro, fracao);

}
