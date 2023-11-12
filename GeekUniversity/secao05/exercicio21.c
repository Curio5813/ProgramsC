#include <stdio.h>


int main(){

	int i, num1, num2, soma = 0, multi = 1;

	printf("Digite dois números: ");
	scanf("%d %d", &num1, &num2);

	if(num1 < num2){

		for(i = num1; i <= num2; i++){

			if(i % 2 == 0){

				soma += i;

			}else if(i % 2 != 0){

				multi *= i;

			}

		}

	}else if(num1 > num2){

		for(i = num2; i <= num1; i++){

			if(i % 2 == 0){

				soma += i;

			}else if(i % 2 != 0){

				multi *= i;

			}

		}

	}printf("A soma dos números pares é igual a %d.\n", soma);
	printf("A multiplicação dos números ímpares é igual a %d.\n", multi);

	return 0;

}
