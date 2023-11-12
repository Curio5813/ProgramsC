#include <stdio.h>
#include <math.h>


int k, i = 1, fat;

double x, rad, seno = 0, pi = 3.141593, t;


double SerieDeTaylorSeno(){

	printf("Digite o valor de angulo em graus: ");
	scanf("%lf", &x);
	printf("\n");

	rad = (x * pi) / 180.0;

	for(k = 0; k < 5; k++){
		t = 2 * k + 1;
		fat = 1;
		i = 1;
		while(i <= t){
			fat *= i;
			i += 1;
		}seno += (pow(-1, k) * pow(rad, t)) / fat;


	}printf("O seno do angulo de %.1lf° é %.5lf", x, seno);

}


int main(){

	SerieDeTaylorSeno();

	return 0;

}
