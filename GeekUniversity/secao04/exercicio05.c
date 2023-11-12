#include <stdio.h>


int main(){

	int num;

	printf("Digite um número inteiro: ");
	scanf("%d", &num);

	if(num % 2 == 0){

		printf("O número %d é par", num);

	}else{

		printf("O número %d é impar", num);
	}


	return 0;

}
