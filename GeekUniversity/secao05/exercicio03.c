#include <stdio.h>
#include <time.h>


int main(){

	int n = 10;
	int sleep_second = 1;

	while(n >= 0){

		printf("%d\n", n);
		n -= 1;
		sleep(sleep_second);

	}printf("FIM!");

	return 0;

}
