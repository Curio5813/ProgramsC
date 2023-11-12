#include <stdio.h>


int a, b, c, soma1, soma2, soma3;


int triangulos(){
	printf("Digite 3 inteiros como valores de segmentos de reta: ");
	scanf("%d%d%d", &a, &b, &c);
	printf("\n");

	soma1 = a + b;
	soma2 = a + c;
	soma3 = b + c;

	if(soma1 > c && soma2 > b && soma3 > a){
		printf("Esses segmentos de reta formam um triângulo!\n");

		if((a == b && b == c)){
			printf("O triângulo é equilátero.");

		}else if((a == b && a != c) || (a == c && a != b) || (b == c && b != a)){
			printf("O triângulo é isóceles.");

		}else if((a != b && a != c)){
			printf("O triângulo é escaleno.");

		}

	}else{
		printf("Esses segmentos de reta não formam triângulos!");

	}

}


int main(){

	triangulos();

	return 0;

}
