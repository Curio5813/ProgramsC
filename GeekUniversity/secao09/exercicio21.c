#include <stdio.h>


int n, num = 2;


int NumerosPrimos(){

	printf("Digite um número para n: ");
	scanf("%d", &n);

	for(int i = 2; i <= num; i++){
		if(num == n + 1){
			break;

		}if(num % i == 0 && i != num){
			i = 2;
			num += 1;

		}if(num % i == 0 && i == num){
			i = 2;
			num += 1;
		}if(num % 2 == 0 && num > 2){
			i = 2;
			num += 1;

		}

	}

}


int main(){

	NumerosPrimos();

	return 0;

}

