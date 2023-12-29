//
// Created by marcos on 27-12-2023.
//
#include <stdio.h>
#include <stdlib.h>


int main(){

    int a, b = 0, prox = 1, *fibo, qtd = 1000000, t, n;

    fibo = (int*)malloc(qtd * sizeof(int));

    if(fibo){
        for(int i = 0; i <= 1000000; i++){
            a = b % 1000;
            b = prox;
            prox = a + b;
            fibo[i] = a;
        }
        scanf("%d", &t);
        for (int i = 0; i < t; i++) {
            scanf("%d", &n);
            if(n <= 1000000){
                int div_int = fibo[n] % 10000;

                if (div_int < 10) {
                    printf("00%d\n", fibo[n]);
                } else if (div_int >= 10 && div_int < 100) {
                    printf("0%d\n", fibo[n]);
                } else if (div_int >= 100) {
                    printf("%d\n", fibo[n]);
                }
            }
            else if(n > 1000000 ){

                int a_fib = n % 10000;

                int div_int = n % 10000;

                if (div_int < 10) {
                    printf("00%d\n", fibo[a_fib]);
                } else if (div_int >= 10 && div_int < 100) {
                    printf("0%d\n", fibo[a_fib]);
                } else if (div_int >= 100) {
                    printf("%d\n", fibo[a_fib]);
                }
            }
        }

    }else{
        printf("Erro: Memória insuficiente!!!");
    }

    free(fibo);
    fibo = NULL;

    return 0;

}
