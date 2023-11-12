#include <stdio.h>


int main(){

	float n1, n2, n3, n4;
	float media;

	printf("Quais são os valores das notas obtidas pelo aluno? ");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

	media = (n1 + n2 + n3 + n4) / 4;

	printf("A média do aluno é %f", media);


	return 0;
}
