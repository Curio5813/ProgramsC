#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//atof()

int main(){
	char valor_s[5];
	double valor_d;

	strcpy(valor_s, "4.5"); //"4.a"

	valor_d = atof(valor_s);

	printf("O valor é %.2f", valor_d);

	return 0;
}
