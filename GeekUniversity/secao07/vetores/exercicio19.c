#include <stdio.h>


int main(){

	int  arr[50], num;

	for(int i = 0; i < 50; i++){

		num = (i + 5 * i) % (i + 1);

		arr[i] = num;

	}for(int i = 0; i < 50; i++){

		printf("%d\n", arr[i]);

	}

	return 0;

}
