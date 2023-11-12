#include <stdio.h>
#include <stdlib.h>


int main(){

	FILE *arq; int cont = 0; char c, ch;

	arq = fopen("texto05.txt", "r");

	printf("Digite um carater: ");
	ch = getchar();

	if(arq){
		c = fgetc(arq);
		while(c != EOF){
			if(c == ch){
				cont += 1;

			}c = fgetc(arq);

		}printf("O caracter %c apareceu %d vezes no texto", ch, cont);

	}else{

		printf("Arquivo não econtrado!");

	}fclose(arq);

	return 0;

}
