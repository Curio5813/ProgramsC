#include <stdio.h>


int main(){

	int i, n, a = 2, cont = 0, soma = 0;

	printf("Digite um número inteiro positivo: ");
	scanf("%d", &n);

	while(cont < n){

		for(i = 2; i <= a; i++){

			if(a % i == 0 && i == a){

				printf("%d ", a);
				soma += a;
				a += 1;
				cont += 1;
				break;

			}else if(a % i == 0 && i != a){

				a += 1;
				break;

			}

		}

	}printf("\n");
	printf("A soma dos %d primeiros números primos é %d", n, soma);

	return 0;

}
