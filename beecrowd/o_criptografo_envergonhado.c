#include <stdio.h>


long long int k, l, i;

int cont = 0;


int  main(){


	while(cont < 20){

		scanf("%lld%lld", &k, &l);

		if(k == 0 && l == 0){
			break;
		}

		for(i = 2; i < 1000000 + 1; i++){
			if(k % i == 0 && i >= l){
				printf("GOOD\n");
				break;

			}else if((long long int)k % i == 0 && i < l){
				printf("BAD %.0lld\n", i);
				break;
			}

		}cont += 1;

	}

	return 0;

}
