#include <stdio.h>


void vetor_real(){

	double v[10], media, soma = 0;

	for(int i = 0; i < 10; i++){
		printf("Digite o %dº valor: ", i + 1);
		scanf("%lf", &v[i]);
		soma += v[i];

	}printf("\n");
	for(int i = 0; i < 10; i++){
		printf("%.1lf ", v[i]);

	}printf("\n");
	for(int i = 9; i >= 0; i--){
		printf("%.1lf ", v[i]);

	}printf("\n");
	media = soma / 10;
	printf("A média é %.1lf", media);

}


int main(){

	vetor_real();

	return 0;

}
