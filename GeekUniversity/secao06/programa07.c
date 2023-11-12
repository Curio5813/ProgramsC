#include <stdio.h>
/*
Tipos de Dados

Tipos Numéricos:
	- Inteiros;
	- Reais;
*/
int main(){
	//inteiro
	//int nota1, nota2; //7, 890, ...

	//reais
	float media, nota1; //22.3, 1.23, ... 99999999
	double nota2; //23.4, 1.23, ... 99999999999999999999999999

	printf("Qual a primeira nota? ");
	scanf("%f", &nota1);

	printf("Qual a segunda nota? ");
	scanf("%lf", &nota2);

	media = nota1 + nota2 / 2.0;

	printf("Sua média é %.1f", media);

	return 0;
}
