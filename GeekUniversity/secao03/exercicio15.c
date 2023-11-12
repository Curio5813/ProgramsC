#include <stdio.h>


int main(){

	const float pi = 3.1415;
	float g, r;


	printf("Quanto mede o ângulo em radianos? ");
	scanf("%f", &r);

	g = r * 180 / pi;

	printf("O ânulo mede em graus %f", g);


	return 0;

}
