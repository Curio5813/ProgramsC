#include <stdio.h>



int main(){

	float a, b, c;

	printf("Digite 3 valores para 3 segmentos de reta: ");
	scanf("%f %f %f", &a, &b, &c);


	if(a + b > c && a + c > b && b + c > a){

		printf("Podemos construir um triângulo com os segmentos dados.\n");

		if(a == b && a == c){

			printf("Pode-se construir um triângulo equilátero.");

		}else if(a == b && a != c || a == c && a != b || b == c && b != a){

			printf("Pode-se construir um triângulo isóceles.");

		}else{

			printf("Pode-se construir um triângulo escaleno.");

		}

	}else{

		printf("Com os 3 segmentos dados não podemos construir um triângulo.");

	}

}
