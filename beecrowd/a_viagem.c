#include <stdio.h>
#include <stdlib.h>


int main(){

	long double gastos = 0.000, gasto[1000], media, despesa, despesas = 0.000; int n, cont = 0;

	scanf("%d", &n);
	while(n != 0){
		for(int i = 0; i < n; i++){
			scanf("%llf", &gasto[i]);
			gastos += gasto[i];

		}media = gastos / n;
		printf("%llf\n", media);
		for(int i = 0; i < n; i++){
			if(gasto[i] > media){
				despesa = gasto[i] - media;
				despesas += despesa;
				printf("%.2llf\n", despesa);
			}

		}printf("$%llf\n", despesas);
		scanf("%d", &n);

	}

	return 0;

}
