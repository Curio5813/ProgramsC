#include <stdio.h>
#include <stdlib.h>



int main(){

	long long int a, b, carta_a, carta_b, cont1, cont2, bool1, bool2;
	long long int *cartas_a, *cartas_b;

	scanf("%lld %lld", &a, &b);
	while(a != 0 && b != 0){
		cont1 = 0;
		cont2 = 0;
		bool1 = 1;
		bool2 = 1;

		cartas_a = (long long int*)malloc(a * sizeof(long long int));
		cartas_b = (long long int*)malloc(b * sizeof(long long int));

		for(long long int i = 0; i < a; i++){
			scanf("%lld", &carta_a);
			for(long long int k = 0; k < i; k++){
				if(carta_a == cartas_a[k]){
					bool1 = 0;
					break;
				}
			}if(bool1 == 1){
				cartas_a[i] = carta_a;
			}
			bool1 = 1;
		}
		for(long long int i = 0; i < b; i++){
			scanf("%lld", &carta_b);
			for(long long int k = 0; k < i; k++){
				if(carta_b == cartas_b[k]){
					bool2 = 0;
					break;
				}
			}if(bool2 == 1){
				cartas_b[i] = carta_b;
			}
			bool2 = 1;
		}
		for(long long int i = 0; i < a; i++){
			for(long long int k = 0; k < b; k++){
				if(cartas_a[i] == cartas_b[k]){
					bool1 = 0;
					break;
				}
			}if(bool1 == 1){
				cont1 += 1;
			}
			bool1 = 1;
		}
		for(long long int i = 0; i < b; i++){
			for(long long int k = 0; k < a; k++){
				if(cartas_b[i] == cartas_a[k]){
					bool2 = 0;
					break;
				}
			}if(bool2 == 1){
				cont2 += 1;
					}
			bool2 = 1;
		}
		if(cont1 <= cont2){
			printf("%lld\n", cont1);
		}
		if(cont2 < cont1){
			printf("%lld\n", cont2);
		}
		free(cartas_a);
		cartas_a = NULL;
		free(cartas_b);
		cartas_b = NULL;
		scanf("%lld %lld", &a, &b);
	}

	return 0;
}
