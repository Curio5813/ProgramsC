#include <stdio.h>


int main(){

	int idade, tserv;

	printf("Qual a idade do trabalhador? ");
	scanf("%d", &idade);
	printf("Qual seu tempo de serviço? ");
	scanf("%d", &tserv);

	if(idade >= 65 || tserv >= 30 || idade >= 60 && tserv >= 25){

		printf("O trabalhador pode aposentar-se.");

	}else{

		printf("O trabalhador não preencheu os requisitos para aposentadoria.");

	}

}
