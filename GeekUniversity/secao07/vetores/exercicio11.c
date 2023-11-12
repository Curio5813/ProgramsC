#include <stdio.h>


int main(){

	float arr[10], qt_negat = 0, soma_posit = 0;

	for(int i = 0; i < 10; i++){

		printf("Digite o %dº valor real: ", i + 1);
		scanf("%f", &arr[i]);

	}for(int i = 0; i < 10; i++){

		if(arr[i] < 0){

			qt_negat += 1;

		}if(arr[i] > 0){

			soma_posit += arr[i];

		}

	}printf("A quantidade de números negativos é igual a %.0f\n", qt_negat);
	printf("A soma dos números positivos é igual a %.2f", soma_posit);

	return 0;

}
