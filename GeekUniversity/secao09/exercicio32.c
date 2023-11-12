#include <stdio.h>


int n, d, maior = 0;

void fracao_simplificada(){

	printf("Digite um inteiro para o numerador da fração: ");
	scanf("%d", &n);
	printf("Digite um número inteiro para o denominador da fração: ");
	scanf("%d", &d);
	printf("\n");

	printf("A fração %d/%d ", n, d);

	if(n > d){
		for(int i = 2; i <= d; i++){
			if(n % i == 0 && d % i == 0){
				maior = i;
			}
		}
	}else if(n < d){
		for(int i = 2; i <= n; i++){
			if(n % i == 0 && d % i == 0){
				maior = i;
			}
		}

	}n /= maior;
	d /= maior;

	printf("tem como sua fração simplificada %d/%d", n, d);

}


int main(){

	fracao_simplificada();

	return 0;

}
