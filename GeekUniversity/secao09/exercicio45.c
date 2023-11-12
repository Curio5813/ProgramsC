#include <stdio.h>


void desvio_padrao(){

	int n;

	double v[5], soma = 0, media, devsp, cov;

	printf("Quantos valores terá o vetor? ");
	scanf("%d", &n);
	printf("\n");

	for(int i = 0; i < n; i++){
		printf("Digite o %2dº valor: ", i + 1);
		scanf("%lf", &v[i]);
		soma += v[i];

	}media = soma / (double)n;
	printf("\n");
	printf("A Soma é %.2lf e a media é %.2lf\n", soma, media);

	for(int i = 0; i < n; i++){

		cov += (1 / (double)(n - 1)) * pow((v[i] - media), 2);

	}devsp = sqrt(cov);
	printf("\n");
	printf("O desvio padrão do dados é de %.2lf", devsp);

}


int main(){

	desvio_padrao();

	return 0;

}
