//
// Created by marcos on 24-11-2023.
//
#include <stdio.h>


int main(){
     int i = 2, k = 1, y, x, cont1 = 2, cont2 = 1, step = 0, resto, pairs[1000], n1 = 0,
     steps[1000], n2 = 0, tam;

     while(i <= 10000){
         while(k <= 10000){
             if(k > i){
                 y = i;
                 x = k;
                 resto = x % y;
                 while(resto != 0) {
                     x = y;
                     y = resto;
                     resto = x % y;
                     step += 1;
                 }if(step >= 1){
                     printf("%d %d %d\n", k, i, step);
                 }
                 step = 0;
             }k += 1;
         }i += 1;
         k = 1;
     }

    return 0;
}