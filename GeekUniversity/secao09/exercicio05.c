#include <stdio.h>

double raio, pi = 3.1415, v;

float volume_esfera(){
    
    printf("Digite o valor do raio da esfera: ");
    scanf("%lf", &raio);

    v = 4/3 * pi * raio * raio * raio;

    printf("O volume da esfera é igual a %.2lf\n\n\n\n", v);

}

int main(){

    volume_esfera(raio);

    return 0;

}

