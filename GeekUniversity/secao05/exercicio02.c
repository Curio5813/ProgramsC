#include <stdio.h>


int main(){

	int i = 1;

	for(i = 1; i <= 100; i++){

		printf("%d\n", i);
	}
	i = 1;
	printf("\n");
	while(i <= 100){
		printf("%d\n", i);
		i += 1;

	}
	i = 1;
	printf("\n");
	do{
		printf("%d\n", i);
		i += 1;
	}
	while(i <= 100);

	return 0;

}
