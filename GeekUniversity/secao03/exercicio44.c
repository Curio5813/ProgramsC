#include <stdio.h>


int main(){

	float degrau, altura, n;

	printf("Qual a altura do degrau da escada (em metros)? ");
	scanf("%f", &degrau);
	printf("Qual altura deseja alcançar na escada (em metros)? ");
	scanf("%f", &altura);

	n = altura / degrau;

	printf("A pessoa deverá subir %f degraus", n);


	return 0;

}
