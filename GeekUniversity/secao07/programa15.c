#include <stdio.h>
//matrizes - parte 2

/*
array uni-dimensional (vetores) int numeros[5];
[0][1][2][3][4]

array multi-dimensional (matrizes) int numeros[5][5]; [linhas][colunas]

[00][01][02][03][04]
[10][11][12][13][14]
[20][21][22][23][24]
[30][31][32][33][34]
[40][41][42][43][44]

*/

// array multi-dimensionais
// char nome[3][50];
int main(){
	//matrizes e inteiros
	/*
	[00][01]
	[10][11]
	*/
	int numeros[2][2];
	numeros[0][0] = 1;
	numeros[0][1] = 2;
	numeros[1][0] = 3;
	numeros[1][1] = 4;

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("numeros[%d][%d] vale %d\n", i, j, numeros[i][j]);
		}
	}

	//matrizes e reais
	float valores[5][5];



	return 0;
}