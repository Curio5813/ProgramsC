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
*/
int main(){
	char opcao;
	printf("Informe uma opção: \n");
	printf("a - Saldo da conta, \n");
	printf("b - Extrato da conta. \n");
	printf("c - Limite da conta, \n");
	scanf("%c", &opcao);

	if(opcao == 'a'){
		printf("Seu saldo é ....\n");
	}else if(opcao == 'b'){
		printf("Extrado da conta...\n");
	}else if(opcao == 'c'){
		printf("Seu limite é ....\n");
	}else{
		printf("Opção desconhecida...\n");
	}

	//Gerar um alfabeto completo com um loop
	for(int i = 97; i <= 122; i++){
		printf("%c\n", i);
	}

	return 0;
}