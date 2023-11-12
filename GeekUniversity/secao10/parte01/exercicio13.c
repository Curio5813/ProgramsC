#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void substrings(char *str1, char *str2, int *a, int *b){

	printf("%d\n", *(b));

	int cont = 0, n = 0;

	for(int i = 0; i < *(a); i++){

		for(int k = n; k < *(b); k++){

			if(str2[k] == str1[i]){

				cont += 1;
				n += 1;
				break;

			}else if(str2[k] != str1[i]){

				cont = 0;

			}
		}

	}if(cont == *(b)){

		printf("A string '%s' é uma substring da string '%s'", str2, str1);

	}else{

		printf("A string '%s' não é uma substring da string '%s'", str2, str1);

	}

}


int main(){

	char str1[50], str2[50];

	int a, b;


	printf("Digite uma string: ");
	scanf("%s", &str1);
	printf("Digite outra string: ");
	scanf("%s", &str2);
	printf("\n");

	a = strlen(str1);
	b = strlen(str2);

	substrings(&str1, &str2, &a, &b);

	return 0;

}
