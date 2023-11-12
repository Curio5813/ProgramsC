#include <stdio.h>
#include <stdlib.h>


int main(){

	int i; float r; char str[10];

	printf("Digite um numero inteiro: ");
	scanf("%d", &i);
	printf("Digite um número real: ");
	scanf("%f", &r);
	printf("Digite uma string: ");
	scanf("%s", &str);
	printf("\n");

	int *j = &i; float *k = &r; char *l = &str;

	int ti = sizeof(i); int tr = sizeof(r); int tstr = sizeof(str);

	printf("O número inteiro vale %d, seu tamanho é de %d bytes, seu endereço\n"
			"de memória em inteiros é %d, e em hexadecimal é %p\n", i, ti, &i, j);
	printf("\n");
	printf("O número real vale %f, seu tamanho é de %d bytes, seu endereço\n"
			"de memória em inteiros é %d, e em hexadecimal é %p\n", r, tr, &r, k);
	printf("\n");
	printf("A string é %s, seu tamanho é de %d bytes, seu endereço\n"
			"de memória em inteiros é %d, e em hexadecimal é %p\n", str, tstr, &str, l);

	return 0;

}
