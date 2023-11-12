#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int neg(p, q){

	int aux;

	aux = p;
	aux *= -1;

	printf("O racional %d/%d tem como sua negação o racional %d/%d", p, q, aux, q);
	printf("\n");

}


int soma(p, q, x, y){

	int denominador, numerador;

	denominador = q * y;
	numerador = ((denominador / q) * p) + ((denominador / y) * x);

	printf("A soma das frações %d/%d por %d/%d é igual a %d/%d", p, q, x, y, numerador, denominador);
	printf("\n");

}

int mult(p, q, x, y){

	int denominador, numerador;

	numerador = p * x;
	denominador = q * y;

	printf("A multiplicação da fração %d/%d pela fração %d/%d é %d/%d", p, q, x, y, numerador, denominador);
	printf("\n");

}


int divid(p, q, x, y){

	int numerador, denominador;

	numerador = p * y;
	denominador = q * x;

	printf("A divisão da fração %d/%d pela fração %d/%d é %d/%d", p, q, x, y, numerador, denominador);
	printf("\n");

}


int main(){

	int p, q, x, y;

	printf("Digite dois inteiros, não nulos, para a razão p/q: ");
	scanf("%d %d", &p, &q);
	printf("Digite dois inteiros, não nulos, para a razão x/y: ");
	scanf("%d %d", &x, &y);
	printf("\n");

	for(int i = 2; i <= q; i++){
		while(p % i == 0 && q % i == 0){
			p /= i;
			q /= i;

		}

	}for(int i = 2; i <= y; i++){
		while(x % i == 0 && y % i == 0){
			x /= i;
			y /= i;

		}

	}printf("As duas frações reduzidas são %d/%d e %d/%d", p, q, x, y);
	printf("\n");

	neg(p, q);

	soma(p, q, x, y);

	mult(p, q, x, y);

	divid(p, q, x, y);

	return 0;

}
