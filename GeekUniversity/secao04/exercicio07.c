#include <stdio.h>


int main(){

	int num1, num2;

	printf("Digite dois números inteiros: ");
	scanf("%d %d", &num1, &num2);

	if(num1 > num2){

		printf("O número %d é o maior", num1);

	}else if(num1 < num2){

		printf("O número %d é o maior", num2);

	}else{

		printf("O números são iguais!");
	}

}
