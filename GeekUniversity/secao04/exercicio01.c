#include <stdio.h>



int main(){

	int num1, num2;

	printf("Qual o valor do número 1? ");
	scanf("%d", &num1);

	printf("Qual o valor do número 2? ");
	scanf("%d", &num2);

	if(num1 > num2){
		printf("O numero %d é maior que o número %d.", num1, num2);

	}else if(num1 < num2){
		printf("O número %d é maior que o número %d.", num2, num1);

	}else{
		printf("Os numeros são iguais!");

	}


	return 0;

}
