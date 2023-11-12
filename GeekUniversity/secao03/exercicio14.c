#include <stdio.h>



int main(){

	const float pi = 3.1415;
	float g, r;

	printf("Quanto mede o ângulo em graus? ");
	scanf("%f", &g);

	r = g * pi / 180;

	printf("O ângulo mede em radianos %f", r);


	return 0;

}
