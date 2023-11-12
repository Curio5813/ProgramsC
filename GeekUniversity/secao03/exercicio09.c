#include <stdio.h>


int main(){

	float c, k;

	printf("Qual a temperatura em graus Celsius? ");
	scanf("%f", &c);

	k = c + 273.15;

	printf("A temperatura em graus Kelvin é: %f", k);


	return 0;

}
