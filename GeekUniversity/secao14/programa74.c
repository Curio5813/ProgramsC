#include <stdio.h>

#ifndef PI
	#define PI 3.14567
#endif
//ifndef - Diretiva de compilação



int main(){

	int valor = 5; //variável

	valor = 467;

	printf("O valor é %d\n", valor);

	printf("PI vale %f\n", (2 * PI));

	return 0;
}
