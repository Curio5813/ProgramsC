//
// Created by marcos on 24-11-2023.
//
#include <stdio.h>


int main(){
     long long i = 2, k, div = 1, step, n, steps[100];

     while(i <= 1000000){
         for(k = 3; k <= 1000000; k++) {
             step = 0;
             div = 1;
             n = k;
             while(n % div == 0){
                 step += 1;
                 n = n / div;
                 div += 1;
             }if(step >= 20){
                 printf("%lld %lld %lld\n ", i, k, step);
             }
         }i++;
     }

    return 0;
}