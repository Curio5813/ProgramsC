#include <stdio.h>


long long int fat = 1, n = 1, aprox;

double e = 0;


void EulerNumber(){

	printf("Digite um valor de aproximação do número de Euler: ");
	scanf("%d", &aprox);

	for(long long int i = 0; i < aprox; i++){
		while(n <= i){
			fat *= n;
			n += 1;
		}e += 1 / (double)fat;
		fat = 1;
		n = 1;



	}printf("O número de Euler é aproximadamente %.7lf", e);

}


int main(){

	EulerNumber();

	return 0;

}
