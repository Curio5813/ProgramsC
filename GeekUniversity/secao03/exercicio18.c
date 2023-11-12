#include <stdio.h>


int main(){

	float l, m;

	printf("Quantos metros cúbicos tem o recipiente? ");
	scanf("%f", &m);

	l = 1000 * m;

	printf("O recipiente tem %f", l);


	return 0;

}
