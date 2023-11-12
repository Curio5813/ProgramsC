#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void tamanho(){

	char palavra[50];

	int tam;

	printf("Digite uma palavra: ");
	scanf("%s", &palavra);
	printf("\n");

	tam = strlen(palavra);

	printf("A palavra %s tem %d letras.", palavra, tam);

}


int main(){

	tamanho();

	return 0;

}
