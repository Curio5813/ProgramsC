#include <stdio.h>
#include <stdlib.h>


int main(){
	FILE *arq; int c, cont = 0;

	arq = fopen("texto02.txt", "r");

	if(arq){
		c = fgetc(arq);
		while(c != EOF){
			if(c == '\n'){
				cont += 1;

			}c = fgetc(arq);

		}printf("%d", cont);

	}else{

		printf("Não achei o arquivo!");

	}fclose(arq);

	return 0;

}
