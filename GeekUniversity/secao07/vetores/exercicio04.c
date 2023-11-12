#include <stdio.h>


int main(){

	int arr[9], x, y, soma;

	for(int i = 0; i < 8; i++){

		printf("Digite o %dº número: ", i + 1);
		scanf("%d", &arr[i]);

	}printf("Digite dois valores de 0 à 8: ");
	scanf("%d %d", &x, &y);

	soma = arr[x] + arr[y];

	printf("%d", soma);

	return 0;

}
