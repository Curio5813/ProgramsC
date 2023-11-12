#include <stdio.h>


int main(){

	float l, m;

	printf("Quantos litros tem o recipiente? ");
	scanf("%f", &l);

	m = l / 1000;

	printf("O recipiente tem %f cúbicos", m);


	return 0;

}
