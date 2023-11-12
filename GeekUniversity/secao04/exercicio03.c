#include <stdio.h>
#include <math.h>


int main(){

	float num, raiz, quadrado;

	printf("Digite um número: ");
	scanf("%f", &num);

	if(num > 0){

		raiz = sqrt(num);
		printf("Sua raiz quadrada é %.5f", raiz);

	}else{

		quadrado = pow(num, 2);
		printf("Seu quadrado é igual à %.5f", quadrado);
	}


	return 0;

}
