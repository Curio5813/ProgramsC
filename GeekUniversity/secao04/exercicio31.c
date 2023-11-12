#include <stdio.h>


int main(){

	double h, p;

	printf("Qual sua altura e seu peso? ");
	scanf("%lf %lf", &h, &p);

	if(h <= 1.20 && p <= 60.0){

		printf("Classificação A");

	}else if(h <= 1.20 && 60.0 < p && p <= 90.0){

		printf("Classificação D");

	}else if(h <= 1.20 && p > 90.0){

		printf("Classificação G");

	}else if(1.20 < h && h <= 1.70 && p <= 60.0){

		printf("Classificação B");

	}else if(1.20 < h && h <= 1.70 && 60.0 < p && p <= 90){

		printf("Classificação E");

	}else if(1.20 < h && h <= 1.70 && p > 90){

		printf("Classificação H");

	}else if(h > 1.70 && p <= 60){

		printf("Classificação C");

	}else if(h > 1.70 && 60 < p && p <= 90){

		printf("Classificação F");

	}else if(h > 1.70 && p > 90){

		printf("Classificação I");

	}

}
