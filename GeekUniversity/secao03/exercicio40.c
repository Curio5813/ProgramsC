#include <stdio.h>


int main(){

	float diaria, valor, ir;
	int dias;

	ir = 0.08;
	diaria = 30.00;

	printf("Quantos dias o encanador trabalhou? ");
	scanf("%d", &dias);

	valor = diaria * dias * (1 - ir);

	printf("O valor líquido recebido pelo encanador é de $%f ", valor);



	return 0;

}
