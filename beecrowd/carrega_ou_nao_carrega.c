#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	long long int num1, num2;

	while(scanf("%lld%lld", &num1, &num2) != EOF){

		long long int bin1[32], bin2[32], bin3[32], dec = 0, n = 0;;
		int i;

		for(i = 31; i >= 0; i--){
			if(num1 % 2 == 0){
				bin1[i] = 0;
			}else{
				bin1[i] = 1;
			}num1 /= 2;

	   }for(i = 31; i >= 0; i--){
		   if (num2 % 2 == 0){
			   bin2[i] = 0;
		   }else{
			   bin2[i] = 1;
		   }num2 /= 2;

	   }for(i = 31; i >= 0; i--){
		   if(bin1[i] == 1 && bin2[i] == 1){
			   bin3[i] = 0;

		   }else if(bin1[i] == 1 && bin2[i] == 0){
			   bin3[i] = 1;

		   }else if(bin1[i] == 0 && bin2[i] == 1){
			   bin3[i] = 1;

		   }else if(bin1[i] == 0 && bin2[i] == 0){
			   bin3[i] = 0;
		   }

	   }for(i = 31; i >= 0; i--){
		   if(bin3[i] == 1){
			   dec += pow(2, n);
		   }n += 1;

	   }printf("%lld\n", dec);

	}

   return 0;

}
