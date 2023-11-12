#include <stdio.h>
#include <math.h>


int t; i, k = 1, fat = 1;

double rad, cos_h = 0, x, pi = 3.141593, a;


void cosseno_hiperbolico(){

	printf("Digite um valor para o angulo (em °): ");
	scanf("%lf", &x);
	printf("\n");

	rad = (x * pi) / 180.0;

	for(i = 0; i < 5; i++){
		t = 2 * i;
		fat = 1;
		k = 1;
		while(k <= t){
			fat *= k;
			k += 1;
		}cos_h += pow(rad, t) / (double)fat;

	}printf("O cosseno hiperbólico do angulo de %.1lf é de %lf", x, cos_h);

	printf("\n");
	a = cosh(rad);

	printf("%lf", a);

}


int main(){

	cosseno_hiperbolico();

	return 0;

}

