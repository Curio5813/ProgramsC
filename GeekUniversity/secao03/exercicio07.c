#include <stdio.h>


int main(){

	float c, f;

	printf("Qual a temperatura em Fahrenheit? ");
	scanf("%f", &f);

	c = 5 * (f - 32) / 9;

	printf("A temperatura em Celsius é %f", c);


	return 0;

}
