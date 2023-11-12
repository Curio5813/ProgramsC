#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void rotina_string(){

	char str1[] = {'a', 'e', 'i', 'o', 'u', 'b'}, ch[50];

	int tam, cont = 0;

	tam = sizeof(str1);

	while(scanf("%c", &ch) != EOF || cont < tam){

		scanf("%c", &ch);
		cont += 1;

	}printf("\n");
	printf("That's all folks!");

}


int main(){

	rotina_string();

	return 0;

}
