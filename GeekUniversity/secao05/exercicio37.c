#include <stdio.h>


int main(){

	int i, n1, n2, n3, p;

	for(i = 1000; i <= 9999; i++){

		n1 = i / 100.0;
		n2 = i % 100;
		n3 = n1 + n2;
		p = pow(n3, 2);

		if(p == i){

			printf("%d\n", i);

		}


	}

	return 0;
}
