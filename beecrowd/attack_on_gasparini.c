#include <stdio.h>

int main(){

    long long int n, x;
    scanf("%lld%lld", &n, &x);
    char titas[n];
    scanf("%s", &titas);
    long long int p, m, g, qt = 0;
    scanf("%lld%lld%lld", &p, &m, &g);
    long long int muros[n], muro = x;

    for(long long int j = 0; j < n; j++){
        muros[j] = x;
    }

    for(long long int i = 0; i < n; i++){
        for(long long int k = 0; k < n; k++){
            if(titas[i] == 'P'){
                if(muros[k] >= p){
                    muros[k] -= p;
                    break;
                }
            }if(titas[i] == 'M'){
                if(muros[k] >= m){
                    muros[k] -= m;
                    break;
                }
            }if(titas[i] == 'G'){
                if(muros[k] >= g){
                    muros[k] -= g;
                    break;
                }
            }
        }

    }for(long long int i =0; i < n; i++){
        if(muros[i] < muro){
            qt += 1;
        }

    }printf("%lld\n", qt);

    return 0;

}
