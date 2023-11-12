#include <stdio.h>


int i, t, k = 1, fat = 1;

double rad, x, seno_h = 0, pi = 3.141593;


double seno_hiperbolico(){

	printf("Digite o valor do ângulo (em °): ");
	scanf("%lf", &x);
	printf("\n");

		rad = (x * pi) / 180;

	for(i = 0; i < 5; i++){
		t = 2 * i + 1;
		fat = 1;
		k = 1;
		while(k <= t){
			fat *= k;
			k += 1;
		}seno_h += pow(rad, t) / (double)fat;

	}printf("O seno hiperbólico do angulo de %.1lf° é %lf", x, seno_h);

	return 0;

}


int main(){

	seno_hiperbolico();

	return 0;

}

