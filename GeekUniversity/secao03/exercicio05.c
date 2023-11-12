#include <stdio.h>


int main(){

	float num;

	printf("Digite um número real: ");
	scanf("%f", &num);

	num = num / 5;

	printf("A quinta parte do número é %f", num);

	return 0;
}
