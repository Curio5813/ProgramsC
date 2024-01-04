//
// Created by marcos on 03-01-2024.
//
#include <stdio.h>
#include <stdlib.h>


int main(){

    long long unsigned a, b = 1, p = 1, n, m, resto, *fibo, qt = 1000;

    fibo = (long long unsigned*)malloc(qt * sizeof(long long unsigned));

    for(long long int i = 0; i <= qt; i++){
        a = b;
        b = p;
        p = a + b;
        fibo[i] = a;
    }

    while(scanf("%llu %llu", &n, &m) != EOF){
        resto = (fibo[fibo[n - 1 - 1] + fibo[n - 2 - 1] - 1]) % m;
        if(n <= 2){
            printf("%llu\n", fibo[0]);
        }
        else if(n > 2){
            printf("%llu\n", resto);
        }

    }
    free(fibo);
    fibo = NULL;

    return 0;
}
