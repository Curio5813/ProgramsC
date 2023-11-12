#include <stdio.h>
#include <string.h>


int main(){

	char pal[50], sub[50];

	int i, k = i, cont = 0, n1 = 0, n2 = 0, tam1, tam2;

	printf("Digite uma palavra: ");
	scanf("%s", &pal);
	printf("Digite uma sub-string: ");
	scanf("%s", &sub);
	printf("\n");

	printf("A palavra foi %s\n", pal);
	printf("A sub-string foi %s\n", sub);

	tam1 = strlen(pal);
	tam2 = strlen(sub);

	if(tam2 > tam1){
		return printf("%d", -1);

	}

	for(i = 0; i < tam1; i++){
		while(k < tam1){
			if(sub[n1] == pal[n2]){
				cont += 1;
				n1 += 1;
				n2 += 1;

			}if(sub[n1] != pal[n2]){
				cont = 0;
				n2 += 1;

			}k += 1;

		}if(cont == tam2){
			return printf("A string '%s' é uma sub-string a palavra %s", sub, pal);

		}n1 = i;
		n2 = 0;
		k = 0;
		cont = 0;

	}if(cont != tam2){
		printf("%d", -1);

	}

	return 0;

}

