#include <stdio.h>


int main(){

	float premio, primeiro, segundo, terceiro;

	premio = 1000000;

	primeiro = premio * 0.46;
	segundo = premio * 0.32;
	terceiro = premio * (0.22);

	printf("O primeiro ganhará %f\no segundo %f\no terceiro %f\n", primeiro, segundo, terceiro);


	return 0;

}
