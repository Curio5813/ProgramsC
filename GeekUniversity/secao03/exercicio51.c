#include <stdio.h>
#include <math.h>


int main(){

		float x, y, d;

		printf("Qual as coordenadas do ponto no plano? ");
		scanf("%f %f", &x, &y);

		d = sqrt(pow(x, 2) + (pow(y, 2)));

		printf("A distância do ponto a origem é %f: ", d);



		return 0;

}
