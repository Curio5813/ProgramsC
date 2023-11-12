#include <stdio.h>


int main(){

	int num1, num2, dif;

	printf("Digite dois números inteiros: ");
	scanf("%d %d", &num1, &num2);

	if(num1 > num2){

		dif = num1 - num2;

		printf("O número %d é maior que o número %d\n", num1, num2);
		printf("A diferença entre eles é igual a %d", dif);

	}else if(num1 < num2){

		dif = num2 - num1;

		printf("O número %d é maior que o número %d\n", num2, num1);
		printf("A diferença entre eles é igual a %d", dif);

	}else{

		dif = num1 - num2;

		printf("Os números são iguais e sua diferença é %d", dif);

	}

}
