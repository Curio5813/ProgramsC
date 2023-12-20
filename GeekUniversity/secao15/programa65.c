#include <stdio.h>
#include <string.h>

//strcat()
int main(){

	char str1[20], str2[20];

	strcpy(str1, "Quinta-");
	strcpy(str2, "feira");

	strcat(str1, str2);

	printf("%s", str1);

	return 0;
}
