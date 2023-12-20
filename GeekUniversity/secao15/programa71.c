#include <stdio.h>
#include <time.h>

//time()

//https://pt.wikipedia.org/wiki/Era_Unix

int main(){
	time_t segundos;

	segundos = time(NULL);
	printf("Horas desde 1 de Janeiro de 1970 = %ld\n", segundos/3600);


	return 0;
}
