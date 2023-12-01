//
// Created by marcos on 24-11-2023.
//
#include <stdio.h>


int main(){
     long long int i = 2, k = 1, y, x, step, resto;

     for(i = 1; i <= 1000000; i++){
         for(k = 1; k <= 1000000; k++){
             step = 0;
             y = i;
             x = k;
             resto = x % y;
             step += 1;
             while(resto != 0) {
                 x = y;
                 y = resto;
                 resto = x % y;
                 step += 1;
             }if(step >= 20){
                 printf("%d %d %d\n", k, i, step);
                 break;
             }
         }
     }

    return 0;
}