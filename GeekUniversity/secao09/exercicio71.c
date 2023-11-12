#include <stdio.h>
#include <stdlib.h>


int ponto(x1, y1, x2, y2){

	int x3, y3;

	printf("Digite as coordenadas do ponto P: ");
	scanf("%d %d", &x3, &y3);
	printf("\n");

	if(x3 > x2 || x3 < x1 || y3 > y2 || y3 < y1){
		printf("O ponto P está fora do retângulo.");

	}else{
		printf("O ponto P está dentro do retângulo.");


	}

}


int main(){

	int x1, y1, x2, y2;

	printf("Digite as coordenadas do vértice inferior esquerdo do retângulo (V1): ");
	scanf("%d %d", &x1, &y1);
	printf("Digite as coordenadas do vértice superiro direito do retângulo (V2): ");
	scanf("%d %d", &x2, &y2);

	ponto(x1, y1, x2, y2);

	return 0;

}
