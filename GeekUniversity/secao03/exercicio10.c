#include <stdio.h>


int main(){

	float k, m;

	printf("Qual a velocidade em km/h? ");
	scanf("%f", &k);

	m = k /3.6;

	printf("A velocidade em m/s é: %f", m);


	return 0;

}
