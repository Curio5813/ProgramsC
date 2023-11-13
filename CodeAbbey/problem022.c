#include <stdio.h>
#include <time.h>


int main(){

	double time_spent;
	clock_t begin = clock();

	long long int cont, soma, i, k, j, n1, n2;


	int data[19][3] = {{24, 15, 19674819},
						{980, 1873, 73767},
						{83, 37, 9440019},
						{111664, 44375, 8644},
						{117001201, 121432101, 8},
						{22932, 26812, 24028},
						{10, 12, 49361519},
						{4, 10, 29705393},
						{92594, 56480, 6686},
						{6, 51, 9970189},
						{46389, 22267, 4705},
						{26833, 28865, 24628},
						{13795, 3020, 46030},
						{64, 632, 998618},
						{55383392, 98566734, 9},
						{2, 1, 260225116},
						{849, 60, 693447},
						{79, 82, 9584982},
						{89, 87, 7421213}};

	for(i = 0; i < 19; i++){
		cont = 0, soma = 0, n1 = 1, n2 = 1;
		while(soma < data[i][2]){
			cont += 1;
			if(cont == data[i][0] * n1){
				soma += 1;
				n1 += 1;
				if(soma == data[i][2]){
					printf("%lld ", cont);
					break;

				}
			}if(cont == data[i][1] * n2){
				soma += 1;
				n2 += 1;
				if(soma == data[i][2]){
					printf("%lld ", cont);
					break;
				}
			}
		}
	}printf("\n");
	clock_t end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("%.2lf seg", time_spent);


	return 0;

}


