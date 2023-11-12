#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int soma_fracoes(p_num, p_den, q_num, q_den){

	int numerador, denominador;

	denominador = p_den * q_den;

	numerador = ((denominador / p_den) * p_num) + ((denominador / q_den) * q_num);

	printf("\n");
	printf("A soma das frações é:\n");
	printf("%d/%d", numerador, denominador);
	printf("\n");

}


int subtracao_fracoes(p_num, p_den, q_num, q_den){

	int numerador, denominador;

	denominador = p_den * q_den;

	numerador = ((denominador / p_den) * p_num) - ((denominador / q_den) * q_num);

	printf("\n");
	printf("A subtração das frações é:\n");
	printf("%d/%d", numerador, denominador);
	printf("\n");

}

int multiplicacao_fracoes(p_num, p_den, q_num, q_den){

	int numerador, denominador;

	numerador = p_num * q_num;

	denominador = p_den * q_den;


	printf("\n");
	printf("A multiplicacão das frações é:\n");
	printf("%d/%d", numerador, denominador);
	printf("\n");

}


int divisao_fracoes(p_num, p_den, q_num, q_den){

	int numerador, denominador;

	numerador = p_num * q_den;

	denominador = p_den * q_num;


	printf("\n");
	printf("A divisão das frações é:\n");
	printf("%d/%d", numerador, denominador);
	printf("\n");

}

int main(){

	int p_num, p_den, q_num, q_den;

	printf("Digite o numerado e denominado da primeira fração: ");
	scanf("%d %d", &p_num, &p_den);
	printf("Digite o numerado e denominado da segunda fração: ");
	scanf("%d %d", &q_num, &q_den);


	for(int i = 2; i < p_num; i++){

		while(p_num % i == 0 && p_den % i == 0){

			p_num /= i;
			p_den /= i;
		}

	}for(int i = 2; i < q_num; i++){

		while(q_num % i == 0 && q_den % i == 0){

			q_num /= i;
			q_den /= i;
		}

	}printf("\n");
	printf("As frações simplificadas são:\n");
	printf("%d/%d e %d/%d", p_num, p_den, q_num, q_den);
	printf("\n");

	soma_fracoes(p_num, p_den, q_num, q_den);

	subtracao_fracoes(p_num, p_den, q_num, q_den);

	multiplicacao_fracoes(p_num, p_den, q_num, q_den);

	divisao_fracoes(p_num, p_den, q_num, q_den);

	return 0;

}





