#include <stdio.h>
#include <stdlib.h>

int compara(int *x, int *y){
	if(*x > *y){
		return 1;
	}else if(*x == *y){
		return 0;
	}else{
		return -1;
	}
}

//qsort()

int main(){
	int numeros[] = {6, 2, 9, 3, 7, 1, 5};

	qsort(numeros, 7, sizeof(int), (void *)compara);

	for(int i = 0; i < 7; i++){
		printf("%d\n", numeros[i]);
	}

	return 0;
}
