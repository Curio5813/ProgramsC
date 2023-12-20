#include <stdio.h>
#include <math.h>

int main(){
	int angulo = 45;

	float res = sinh(angulo);

	printf("O conseno hiperbólico de %d é %f", angulo, res);

	return 0;
}
