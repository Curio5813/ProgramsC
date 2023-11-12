#include <stdio.h>
#include <math.h>



int main(){

	int num;
	float raiz;

	printf("Qual número deseja calcular a sua raíz quadrada? ");
	scanf("%d", &num);

	if(num > 0){
		raiz = sqrt(num);
		printf("A raiz quadrada do número %d é %.5f", num, raiz);

	}else if(num < 0){
		printf("Número inválido!");

	}

}
