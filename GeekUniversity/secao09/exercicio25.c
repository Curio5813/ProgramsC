#include <stdio.h>


int n;

double s = 0;


int Serie1(){

	printf("Digite um numero inteiro para n: ");
	scanf("%d", &n);

	if(n == 0){

		s = (n * n + 1) / (double)(n + 3);

	}else if(n > 0){

		for(int i = 0; i < n; i ++){

			s += (n * n + 1) / (double)(n + 3);

		}

	}printf("%.5lf", s);

}


int main(){

	Serie1();

	return 0;

}
