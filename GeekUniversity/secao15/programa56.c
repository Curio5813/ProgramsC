#include <stdio.h>
#include <math.h>

int main(){
	int angulo = 45;

	float res = tanh(angulo);

	printf("A tangente hiperbólica de %d é %f", angulo, res);

	return 0;
}
