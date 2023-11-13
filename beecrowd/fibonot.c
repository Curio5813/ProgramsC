#include <stdio.h>


int main(){

	int a = 1, b = 1, p = a + b, n = 0, num;
	int fibo[25], fibonot[100500];

	for(int i = 0; i <= 100; i++){

		if(a >= 100500){

			break;

		}

		fibo[i] = a;
		a = b;
		b = p;
		p = a + b;

	}for(int i = 1; i <= 100500; i++){

		for(int k = 1; k <= 25; k++){

			if(fibo[k] == i){

				break;

			}else if(k == 25){

				fibonot[n] = i;
				n += 1;

			}


		}

	}scanf("%d", &num);
	printf("%d\n", fibonot[num - 1]);


	return 0;

}
