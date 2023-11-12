#include <stdio.h>
#include <math.h>


int main(){

	float a, b, c, x1, x2, delta;

	printf("Digite os valores dos coeficientes da equação do 2º: ");
	scanf("%f %f %f", &a, &b, &c);

	if(a == 0){

		printf("A equação não é do 2º grau.");

	}else{

		delta = pow(b, 2) - (4 * a * c);

		if(delta < 0){

			printf("Não existe raíz real.");

		}else if(delta == 0){

			x1 = -b / (2 * a);

			printf("Existe uma única raíz real %.2f", x1);

		}else if(delta > 0){

			x1 = -b + sqrt(delta) / (2 * a);
			x2 = -b - sqrt(delta) / (2 * a);

			printf("Existem duas raízes reais %.2f e %.2f", x1, x2);

		}

	}


}
