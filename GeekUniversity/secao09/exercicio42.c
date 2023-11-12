#include <stdio.h>


void media(){

	double v[4], soma = 0, media;

	for(int i = 0; i < 4; i++){
		printf("Digite um valor entre 0 à 10: ");
		scanf("%lf", &v[i]);
		soma += v[i];


	}media = soma / 4.0;
	printf("A média é igual à %.2lf", media);

}


int main(){

	media();

	return 0;

}
