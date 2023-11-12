#include <stdio.h>
#include <math.h>


int main(){

	float num, raiz, quadrado;

	printf("Digite um número: ");
	scanf("%f", &num);

	if(num > 0){

		raiz = sqrt(num);
		quadrado = pow(num, 2);
		printf("Seu quadrado é %f e sua raiz quadrada é %f", quadrado, raiz);

	}else{

		printf("O número digitado não é positivo!");

	}
}
