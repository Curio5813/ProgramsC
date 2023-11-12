#include <stdio.h>


int main(){

	float c, f;

	printf("Qual a temperatura em graus Celsius? ");
	scanf("%f", &c);

	f = c * (9 / 5) + 32;

	printf("A temperatura em Fahrenheit é: %f", f);

	return 0;

}
