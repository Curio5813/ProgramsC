#include <stdio.h>


int main(){

	float l, kg;

	printf("Qual o valor da massa em libras? ");
	scanf("%f", &l);

	kg = l * 0.45;

	printf("A massa pesa: %f", kg);


	return 0;

}
