#include <stdio.h>

int main(){
    FILE *arq1, *arq2;
    char doc[30], texto[100][100], linha[100], *resultado, ch;
    int cont = 0, dia_atual, mes_atual, ano_atual;

    printf("Qual o nome do arquivo que deseja abrir? ");
    scanf("%s", &doc);
    printf("Qual a data de hoje? ");
    scanf("%d %d %d", &dia_atual, &mes_atual, &ano_atual);
    arq1 = fopen(doc, "r");
    arq2 = fopen("texto14_02.txt", "w");

    if(arq1){
        while(fscanf(arq1, "%s", texto[cont]) != EOF && fscanf(arq1, "%c", &ch) != '\n') {
            resultado = fgets(linha,sizeof(linha), arq1);
            fputs(resultado, arq2);
        }
    }else{
        printf("Arquivo não encontrado!");
    }

    fclose(arq1);

    return 0;
}