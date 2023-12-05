#include <stdio.h>
#include <string.h>
//Struct -> estrutura

struct st_contato{
	char nome[100];
	int ano_nascimento;
	char telefone[20];
	char email[100];
};

struct st_agenda{
	struct st_contato contatos[100];
}agenda;



int main(){

	for(int i = 0; i < 3; i++){
		printf("Informe o nome: ");
		fgets(agenda.contatos[i].nome, 100, stdin);

		printf("Informe o ano de nascimento: ");
		scanf("%d", &agenda.contatos[i].ano_nascimento);
		getchar();

		printf("Informe o telefone: ");
		fgets(agenda.contatos[i].telefone, 20, stdin);

		printf("Informe o email: ");
		fgets(agenda.contatos[i].email, 100, stdin);
	}

	printf("============ Agenda de Contato ==============\n");
	for(int i = 0; i < 3; i++){
		printf("================= Contato %d ================\n", (i+1));
		printf("Nome: %s\n", strtok(agenda.contatos[i].nome, "\n"));
		printf("Telefone: %s\n", strtok(agenda.contatos[i].telefone, "\n"));
		printf("E-mail: %s\n", strtok(agenda.contatos[i].email, "\n"));
		printf("Ano de nascimento: %d\n", agenda.contatos[i].ano_nascimento);
	}

	return 0;
}
