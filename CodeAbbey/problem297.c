#include <stdio.h>
#include <time.h>

long long int maior = 0, n = 0, num;
double time_spent;

long long int collatz_in_the_range(){

	clock_t begin = clock();

	for(long long int i = 2487073515; i <= 2499868361; i++){
		num = i;
		n = 0;
		while(num > 1){
			if(num % 2 != 0){
				num = 3 * num + 1;
		        n += 1;
			}else if(num % 2 == 0){
				num = num / 2;
				n += 1;
		    }

		 }if(n > maior){
			 maior = n;
		 }
	}printf("%lld\n\n", maior);
	clock_t end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("%.2lf seg", time_spent);

}


int main(){

    collatz_in_the_range();

    return 0;

}
