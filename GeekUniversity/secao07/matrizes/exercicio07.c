#include <stdio.h>


int main(){

	int m[10][10];

	for(int i = 0; i < 10; i++){

		for(int j = 0; j < 10; j++){

			if(i < j){

				m[i][j] = 2 * i + 7 * j - 2;

			}else if(i == j){

				m[i][j] = 3 * i * i - 1;

			}else if(i > j){

				m[i][j] = 4 * i * i * i - 5 * j * j + 1;

			}

		}

	}for(int i = 0; i < 10; i++){

		for(int k = 0; k < 10; k++){

			printf("%5d ", m[i][k]);

		}printf("\n");

	}

	return 0;
}
