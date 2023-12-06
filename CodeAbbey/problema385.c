#include <stdio.h>

int main() {

    long long int i, k, x, y, resto, step, maior = 0;

    for(i = 1; i <= 100000; i++) {
        for(k = 1; k <= 1000; k++){
            x = i;
            y = k;
            step = 0;
            if(x >= y){
                resto = x % y;
                step += 1;
                while(resto > 0){
                    step += 1;
                    x = y;
                    y = resto;
                    resto = x % y;
                }if(step > maior){
                    maior = step;
                    printf("%lld %lld %lld\n", i, k, maior);
                }
            }else{
                break;
            }
        }
    }
    return 0;
}