#include <stdio.h>

double salario, bonus = 0.15, vendas, total;
char nome[50];

int main(){

    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    total = salario + vendas * bonus;

    printf("TOTAL = R$ %.2lf\n", total);

}
