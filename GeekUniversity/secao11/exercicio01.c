#include <stdio.h>
#include <stdlib.h>


int main(){
	FILE *arq; int c;

	arq = fopen("arq.txt", "w+");

	if(arq){
		printf("Escreva algo: ");
		c = getchar();
		while(c != '0'){
			fputc(c, arq);
			c = getchar();

		}

	}else{

		printf("Não achei o arquivo!");

	}fclose(arq);

	arq = fopen("arq.txt", "r");

	if(arq){
		c = fgetc(arq);
		while(c != EOF){
			printf("%c", c);
			c = fgetc(arq);

		}

	}fclose(arq);

	return 0;

}
