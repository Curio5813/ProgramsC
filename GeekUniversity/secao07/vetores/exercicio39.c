#include <stdio.h>


int main(){

    int n, coef = 0;

    printf("digite um inteiro n: ");
    scanf("%d", &n);
    printf("\n");

    for (int i = 0; i <= n; i++){

    	for (int j = 0; j <= i; j++){

             if (i == 0 || j == 0){

            	 coef = 1;

             }else{

            	 coef = coef * (i - j + 1) / j;

             }printf("%2d ", coef);

    	}printf("\n");

    }

    return 0;

}

