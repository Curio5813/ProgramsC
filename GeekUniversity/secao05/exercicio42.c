#include <stdio.h>


int main(){

	double num, quadrado, cubo, raiz;

	printf("Digite um valor: ");
	scanf("%lf", &num);

	while(num > 0){

		quadrado = pow(num, 2);
		cubo = pow(num, 3);
		raiz = sqrt(num);

		printf("O quadrado do número é %.0lf\n", quadrado);
		printf("O cubo do número é %.0lf\n", cubo);
		printf("A raíz quadrada do número é %.5lf\n", raiz);
		printf("\n");
		printf("Digite um valor: ");
		scanf("%lf", &num);

	}

	return 0;

}
