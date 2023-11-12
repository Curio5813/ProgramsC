#include <stdio.h>


int main(){

	int i, dez, num, algarismo;

	printf("Digite um número: ");
	scanf("%d", &num);

	while(num > 0){

		algarismo = num % 10;
		num /= 10;
		printf("%d ", algarismo);

	}

	return 0;

}
