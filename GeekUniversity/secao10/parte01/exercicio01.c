#include <stdio.h>
#include <stdlib.h>


void incrementa(int *i, float *f, char *str){

	printf("%d %f\n", ++*(i), ++*(f));

}


int main(){

	int i; float f; char str[50];

	printf("Digite um número inteiro: ");
	scanf("%d", &i);
	printf("Digite um número real: ");
	scanf("%f", &f);
	printf("Digite uma string: ");
	scanf("%s", &str);
	printf("\n");

	int *p = &i; float *pf = &f; char *ps = &str;

	printf("Antes de incrementar o inteiro vale '%d' o numero real vale '%.2f' e a string vale '%s'\n", i, f, str);
	printf("Seus endereços de memória são respectivamente %p %pf %ps\n", &i, &f, &str);
	printf("\n");

	incrementa(&i, &f, &str);

	printf("Depois de incrementar o inteiro vale '%d' o numero real vale '%.2f' e a 'string' vale %s\n", i, f, str);
	printf("Seus endereços de memória são respectivamente %p %pf %ps\n", p, pf, ps);

	return 0;

}
