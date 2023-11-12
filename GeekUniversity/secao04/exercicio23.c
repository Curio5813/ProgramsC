#include <stdio.h>


int main(){

	int ano;

	printf("Digite um ano: ");
	scanf("%d", &ano);

	if(ano % 400 == 0 || ano % 100 != 0 && ano % 4 == 0){

		printf("O ano %d é bissexto.", ano);

	}else{

		printf("O ano %d não é bissexto.", ano);

	}

	return 0;

}
