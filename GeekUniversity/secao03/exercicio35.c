#include <math.h>
#include <stdio.h>



int main(){

	float a, b, h;

	printf("Digite os valores dos catetos a e b: ");
	scanf("%f %f", &a, &b);

	a *= a;
	b *= b;

	h = sqrt(a + b);

	printf("A hipotensua é igual a %f", h);


	return 0;

}
