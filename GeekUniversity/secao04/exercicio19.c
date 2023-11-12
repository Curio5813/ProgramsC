#include <stdio.h>



int main(){

	int num;

	printf("Digite um número inteiro: ");
	scanf("%d", &num);

	if(num % 3 == 0 && num % 5 != 0){

		printf("O número %d é divisível por 3 e não por 5.", num);

	}else if(num % 3 != 0 && num % 5 == 0){

		printf("O número %d é divisível por 5 e não por 3.", num);

	}else{

		printf("O número %d é divível por 3 e por 5 ou por nenhum dos dois.", num);
	}

}
