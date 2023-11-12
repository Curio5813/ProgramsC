#include <stdio.h>
#include <math.h>


double a, b, h;

double hipotenusa(){
	printf("Digite o valor do cateto 'a' e 'b': ");
	scanf("%lf%lf", &a, &b);

	h = sqrt(a * a + b * b);

	printf("O valor da hipotenusa é %.2lf", h);

}


int main(){

	hipotenusa();

	return 0;

}
