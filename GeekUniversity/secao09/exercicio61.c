#include <stdio.h>
#include <string.h>


int main(){

	char palavra[50], anagrama[50];

	int i, k = i, cont = 0, n1 = 0, n2 = 0, tam1, tam2;

	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	printf("Digite outra palavra: ");
	scanf("%s", anagrama);
	printf("\n");
	tam1 = strlen(palavra);
	tam2 = strlen(anagrama);

	if(tam2 != tam1){
		return printf("A string '%s' não é um anagrama da palavra '%s'.", anagrama, palavra);
	}

	for(i = 0; i < tam1; i++){
		while(k < tam1){
			if(palavra[n2] == anagrama[n1]){
				cont += 1;
				break;

			}k += 1;
			n1 += 1;

		}n2 = i;
		n1 = 0;
		k = 0;

	}if(cont == tam1){
		return printf("A string '%s' é um anagrama da palavra '%s'.", anagrama, palavra);

	}if(cont != tam1){
		printf("A string '%s' não é um anagrama da palavra '%s'.", anagrama, palavra);

	}

	return 0;

}

