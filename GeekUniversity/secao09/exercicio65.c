#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void string_dois(){

	char str1[50], str2[50];

	int n, tam1, tam2, idx = 0;

	printf("Digite a primeira string: ");
	scanf("%s", &str1);
	printf("Digite a segunda string: ");
	scanf("%s", &str2);
	printf("Quantos caracteres da string '%s' deseja concatenar: ", str2);
	scanf("%d", &n);
	printf("\n");

	tam1 = strlen(str1);
	tam2 = tam1 + n;

	for(int i = tam1; i < tam2; i++){
		str1[i] = str2[idx];
		idx += 1;

	}printf("%s", str1);

}


int main(){

	string_dois();

	return 0;

}
