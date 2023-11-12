#include <stdio.h>


int num1, num2;

int maior(){

	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("Digite o segundo número: ");
	scanf("%d", &num2);

	if(num1 > num2){

		printf("O número %d é maior que o número %d", num1, num2);

	}else if(num1 < num2){

		printf("O número %d é maior que o número %d", num2, num1);

	}else{

		printf("O números são iguais");

	}

}


int main(){

	maior();

	return 0;

}
