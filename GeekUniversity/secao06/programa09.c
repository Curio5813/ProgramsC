#include <stdio.h>
/*
Tipos de Dados

Tipos Alfanuméricos:
	- Characteres;
	- Strings*;

	* Na linguagem C, não existe o tipo de dado String.

	Ex: String
	"abasfadfa fadsf adf asf af dasf asf asdf";

	Ex: Caractere
	's';

	"paulo\0";
*/
int main(){
	//declaração de uma string em C
	char nome[50]; //49 caracteres

	printf("Qual é seu nome? ");
	gets(nome);

	printf("Seu nome é %s", nome);
}