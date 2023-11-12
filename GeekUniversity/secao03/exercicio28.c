#include <stdio.h>


int main(){

	int num1, num2, num3;

	printf("Quais são os 3 valores? ");
	scanf("%d %d %d", &num1, &num2, &num3);

	num1 *= num1;
	num2 *= num2;
	num3 *= num3;

	printf("Os valores ao quadardo são %d %d %d", num1, num2, num3);


	return 0;

}
