#include <stdio.h>

//aula 02 escrevendo funções
// main -> principal

// Estrutura das funções
/*
 - tipo de retorno
 - nome
 - parâmetros de entrada (opcional)
 - implementação (corpo da função)
 - retorno (opcional)
*/

void mensagem(){
	printf("Bem-vindo!");
}

int soma(int num1, int num2){
	int res = num1 + num2;
	return res;
}

// 'a'
// 97
void proximo_char(char caractere){
	printf("%c", caractere+1);
}

int main(){
	printf("Olá...");
	return 0;
}