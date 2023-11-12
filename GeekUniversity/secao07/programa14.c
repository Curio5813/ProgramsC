#include <stdio.h>
//matrizes - parte 1

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
	//vetores e strings
	char nome[3][50];
	// "asdggfs"
	for(int i = 0; i < 3; i++){
		printf("Qual seu nome? ");
		gets(nome[i]);
	}

	for(int i = 0; i < 3; i++){
		printf("Olá %s\n", nome[i]);
	}

	return 0;
}