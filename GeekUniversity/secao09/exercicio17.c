#include <stdio.h>


int num1, num2, soma = 0;


int EntreNumeros(){

	printf("Digite dois números inteiros maiores que zero: ");
	scanf("%d%d", &num1, &num2);

	if(num1 < num2){
		for(int i = num1 + 1; i < num2; i++){
			soma += i;

		}

	}else if(num1 > num2){
		for(int i = num2 + 1; i < num1; i++){
			soma += i;

		}

	}printf("%d", soma);

}


int main(){

	EntreNumeros();

	return 0;

}
