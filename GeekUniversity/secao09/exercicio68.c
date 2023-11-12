#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void intercalacao_string(){

	char str1[50], str2[50], str3[100];

	int tam1, tam2, tam3, n1 = 0, n2 = 0;

	printf("Digite uma palavra: ");
	scanf("%s", &str1);
	printf("Digite outra palavra: ");
	scanf("%s", str2);
	printf("\n");

	tam1 = strlen(str1);
	tam2 = strlen(str2);
	tam3 = tam1 + tam2;

	for(int i = 0; i < tam3; i++){

		str3[n1] = str1[n2];
		str3[n1 + 1] = str2[n2];
		n1 += 2;
		n2 += 1;

	}printf("%s", str3);


}


int main(){

	intercalacao_string();

	return 0;

}
