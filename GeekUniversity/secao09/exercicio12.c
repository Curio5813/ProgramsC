#include <stdio.h>


int num, soma, resto, a;

int soma_digitos(){

	printf("Digite um número inteiro maior que zero: ");
	scanf("%d", &num);

	a = num;

	if(num <= 0){

		return printf("Número inválido.");

	}else if(num > 0){

		while(num > 0){

			resto = num % 10;
			soma += resto;
			num /= 10;
		}

	}printf("A soma dos dígitos do número %d é %d", a, soma);

}


int main(){

	soma_digitos();

	return 0;

}
