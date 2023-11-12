#include <stdio.h>
#include <stdlib.h>


int main(){

	FILE *arq; int c, cont = 0;

	arq = fopen("texto03.txt", "r");

	c = fgetc(arq);

	if(arq){
		while(c != EOF){

			if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
					c == 'A'|| c == 'E' || c == 'I' || c == 'O' || c == 'U'){

				cont += 1;

			}c = fgetc(arq);

		}printf("%d", cont);

	}else{

		printf("Arquivo não encontrado!");

	}fclose(arq);

	return 0;

}
