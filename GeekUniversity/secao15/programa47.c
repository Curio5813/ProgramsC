#include <stdio.h>
#include <stdlib.h>

//rand()

//primeria vez 29, 54, 3, 54, 7, 49

//após inicializar o gerador

//1 vez 53, 45, 25, 49, 52, 27

//2 vez 21, 43, 12, 49, 10, 28

int main(){
	time_t t;

	//inicializar o gerador
	srand((unsigned) time(&t));


	//Gerar 6 números entre 0 e 60
	for(int i = 0; i < 6; i++){
		printf("%d\n", rand() % 61);
	}
	return 0;
}
