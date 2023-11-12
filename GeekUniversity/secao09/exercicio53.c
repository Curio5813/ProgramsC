#include <stdio.h>


void matriz_identidade(){

	int a[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}}, cont = 0;

	for(int i = 0; i < 3; i++){

		for(int k = 0; k < 3; k++){
			if(i == k && a[i][k] == 1){

				cont += 0;

			}if(i != k && a[i][k] == 0){

				cont += 0;

			}else if(i == k && a[i][k] != 1 || i != k && a[i][k] != 0){

				cont += 1;
			}

		}

	}if(cont == 0){

		printf("A matriz A é uma matriz identidade.");

	}else if(cont > 0){

		printf("A matriz A não é uma matriz identidade.");
	}

}


int main(){

	matriz_identidade();

	return 0;

}
