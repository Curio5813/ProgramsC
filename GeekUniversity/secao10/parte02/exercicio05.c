#include <stdio.h>
#include <stdlib.h>


int main(){

	int x1 = 1, x2 = 2, *px1, *px2;



	px1 = &x1;
	px2 = &x2;

	printf("%p\n\n", &x2);

	x1 = 5;
	x2 = *(px1) + 10;

	printf("%p\n\n", &x2);

	x1 = 9;

	printf("x1: %d x2: %d *px1: %d\n", x1, x2, *px1);
	printf("\n");
	printf("Neste programa foi criado um ponteiro que aponta para uma memória reservada\n"
			"por uma variável, que mesmo modificada continua no mesmo espaço de memória\n"
			"reservada, apontado para este valor.\n");
	printf("\n");

	return 0;

}
