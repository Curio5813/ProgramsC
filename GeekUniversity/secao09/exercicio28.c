#include <stdio.h>


int k, i, fat;

double cos, x, t, rad, pi = 3.141593;


double 	SerieDeTaylorCosseno(){


	printf("Digite o valor do ângulo (em °): ");
	scanf("%lf", &x);
	printf("\n");

	rad = (x * pi) / 180;

	for(k = 0; k < 5; k++){
		t = 2 * k;
		fat = 1;
		i = 1;
		while(i <= t){
			fat *= i;
			i += 1;

		}cos += (pow(-1, k) * pow(rad, t)) / fat;

	}printf("O Cosseno do angulo de %.1lf° é %.5lf", x, cos);

}


int main(){

	SerieDeTaylorCosseno();

	return 0;

}
