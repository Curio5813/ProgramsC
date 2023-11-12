#include <stdio.h>


int num, maior = 0;


int MaiorFatorPrimo(){

	printf("Digite um número inteiro positivo: ");
	scanf("%d", &num);

	for(int i = 2; i <= num; i++){

		while(num % i == 0){
			num /= i;
			maior = i;

		}

	}printf("%d", maior);

}


int main(){

	MaiorFatorPrimo();

	return 0;

}
