#include <stdio.h>


int num;
float val;
char carac;
char strg[50];


int main(){

	scanf("%d%f%c%[^\n]",&num, &val, &carac, &strg);
	printf("%d%.6f%c%s\n", num, val, carac, strg);
	printf("%d\t%.6f\t%c\t%s\n", num, val, carac, strg);
	printf("%10d%10.6f%10c%10s\n", num, val, carac, strg);


return 0;

}
