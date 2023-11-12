#include <stdio.h>


int main(){

	int i, k, a, b, n, r1, r2, n1 = 10, n2, cont = 0,
			a1, a2, a3, b1, b2, b3, maior = 0, im, km;

	for(i = 100; i <= 999; i++){

		for(k = 100; k <= 999; k++){

			n = i * k;
			a = n / 1000.0;
			b = n % 1000;
			cont = 0;

			while(a > 0){

				r1 = a % n1;
				r2 = b % n1;
				a /= 10.0;
				b /= 10.0;
				cont += 1;

				if(cont == 1){
					a1 = r1;
					b1 = r2;

				}else if(cont == 2){
					a2 = r1;
					b2 = r2;

				}else if(cont == 3){
					a3 = r1;
					b3 = r2;

				}

			}if(a1 == b3 && a2 == b2 && a3 == b1){

				if(n > maior){

					maior = n;
					im = i;
					km = k;
					printf("%d %d %d \n", maior, im, km);

				}

			}

		}

	}

	return 0;

}
