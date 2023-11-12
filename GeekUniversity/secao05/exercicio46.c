#include <stdio.h>
#include <stdlib.h>


int main(){

	int i, num, n, cont = 0;

	for(i = 1; i <= 8888; i++){

		num = (rand() % 1000);

	}
	while(n != num){

		printf("Dê um palpite para acerta o número: ");
		scanf("%d", &n);

		if(n != num && n > num){

			printf("O chute foi maior que o número!\n");
			cont += 1;

		}else if(n != num && n < num){

			printf("O chute foi menor que o número!\n");
			cont += 1;

		}else if(n == num){

			printf("Você acertou! o número é igual a %d\n em %d palpites", num, cont);

		}printf("\n");

	}


	return 0;

}
