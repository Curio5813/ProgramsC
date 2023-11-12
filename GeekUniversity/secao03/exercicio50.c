#include <stdio.h>



int main(){

	int idade, ano, nascimento;

	printf("Qual o ano atual e a idade da pessoa? ");
	scanf("%d %d", &ano, &idade);

	nascimento = ano - idade;

	printf("O ano de nascimento da pessoa é %d", nascimento);


	return 0;


}
