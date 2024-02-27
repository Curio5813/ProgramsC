#include <stdio.h>
#include <stdlib.h>


int main(){

	int a, b, x, y, temp, i = 1, k = 1, j = 0, step = 0;
	int t = 9, cont = 0, steps[9] = {9, 17, 26, 31, 48, 56, 67, 72, 84};

	while(i <= 10000000){
		while(k <= 10000){
			if(i % k == 0){
				k = 2;
				i += 1;
				break;
			}
			else{
				a = i;
				b = k;
				x = i;
				y = k;
				while(y != 0){
					temp = y;
					y = x % y;
					x = temp;
					step += 1;
					//printf("%d %d\n", x, y);
				}
				if(step == steps[j]){
					//printf("%d\n", steps[j]);
					printf("%d %d %d\n", a, b, steps[j]);
					step = 0;
					cont += 1;
					i = 1;
					k = 1;
					j += 1;
					break;
				}else{
					step = 0;
				}
			}
			k += 1;
		}
		i += 1;
		if(i >= 10000000){
			i = 1;
			k = 1;
			cont += 1;
			if(cont == t){
				printf("Fim do programa!\n");
				break;
			}
		}
	}

	return 0;
}
