#include <stdio.h>


int main(){

	float v[10], soma = 0, m, md = 0, dp;

	for(int i = 0; i < 10; i++){

		printf("Digite o %dº número: ", i + 1);
		scanf("%f", &v[i]);

	}for(int i = 0; i < 10; i++){

		soma += v[i];

	}m = soma / 10.0;
	for(int i = 0; i < 10; i++){

		md += (v[i] - m) * (v[i] - m);

	}

	dp = sqrt((1.0 / (10.0 - 1.0)) * md);

	printf("O desvio padrão é de %.2f", dp);

	return 0;

}
