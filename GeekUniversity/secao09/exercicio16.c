#include <stdio.h>


int qt, linhas;


int DesenhaLinha(){

	printf("Qual a quantidade de linhas deseja desenhar: ");
	scanf("%d", &qt);

	for(int i = 0; i < qt; i++){
		printf("=");

	}

}


int main(){

	DesenhaLinha();

	return 0;

}
