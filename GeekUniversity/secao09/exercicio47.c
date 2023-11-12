#include <stdio.h>


void maiores_que_10(){

	int v[4][4], n = 0;

	for(int i = 0; i < 4; i++){
		for(int k = 0; k < 4; k++){
			printf("Digite o primeiro valor para a %dº linha e %dº coluna: ", i + 1, k + 1);
			scanf("%d", &v[i][k]);
			if(v[i][k] > 10){
				n += 1;
			}

		}
	}printf("\n");
	printf("Na matriz existe(em) %d valores maiores que 10", n);

}


int main(){

	maiores_que_10();

	return 0;

}
