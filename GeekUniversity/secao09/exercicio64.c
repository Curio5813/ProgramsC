#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void concatencao_strings(){

	char str1[50], str2[50], str3[100];

	int tam1, tam2, tam3, n = 0;

	printf("Digite a primeira string: ");
	scanf("%s", &str1);
	printf("Digite a segunda string: ");
	scanf("%s", &str2);
	printf("\n");

	tam1 = strlen(str1);
	tam2 = strlen(str2);
	tam3 = tam1 + tam2;

	for(int i = 0; i < tam1; i++){
		str3[i] = str1[i];

	}for(int i = tam1; i < tam3; i++){
		str3[i] = str2[n];
		n += 1;

	}printf("\n");
	printf("%s", str3);

}


int main(){

	concatencao_strings();

	return 0;

}
