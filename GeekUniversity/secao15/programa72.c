#include <stdio.h>
#include <time.h>

//localtime()

int main(){
	time_t tempobruto;
	struct tm *info;

	time(&tempobruto);

	info = localtime(&tempobruto);
	printf("Data e hora local %s", asctime(info));

	return 0;
}
