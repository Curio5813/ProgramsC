#include <stdio.h>



int main(){

	int a, b, i, soma, resp, cont;

	cont = 0;

	for(i = 0; i < 5; i ++){
		printf("Escolha dois números: ");
		scanf("%d %d", &a, &b);
		printf("Qual a soma de %d + %d? ", a, b);
		scanf("%d", &resp);

		soma = a + b;

		if(resp == soma){

			printf("Você acertou! Parabéns.\n");
			printf("\n");
			cont += 1;

		}else{

			printf("Você erro! Vamos tentar denovo.\n");
			printf("\n");

		}

	}printf("Você acertou %d de 5 perguntas.", cont);

}
