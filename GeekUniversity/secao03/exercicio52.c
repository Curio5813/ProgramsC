#include <stdio.h>


int main(){

	float p1, p2, p3, b1, b2, b3, premio;

	printf("Quanto cada um dos amigos apostaram no prêmio da lotérica: ");
	scanf("%f %f %f", &b1, &b2, &b3);

	p1 = b1 / (b1 + b2 + b3);
	p2 = b2 / (b1 + b2 + b3);
	p3 = b3 / (b1 + b2 + b3);

	printf("\n");
	printf("Qual o valor do prêmio? $");
	scanf("%f", &premio);

	p1 *= premio;
	p2 *= premio;
	p3 *= premio;

	printf("\n");
	printf("O amigo 1 ganhará $%.2f", p1);
	printf("O amigo 2 ganhará $%.2f", p2);
	printf("O amigo 3 ganhará $%.2f", p3);


	return 0;

}
