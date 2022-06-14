#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tamanho 50

struct spilha{
	char dados[tamanho];
	int ini;
	int fim;
};

struct spilha pilha_livros;
int op;

void empilhar_livros(){
	if(pilha_livros.fim == tamanho) {
		printf("A pilha de livros está grande demais, não há como empilhar mais!");
		system("pause");
	}
	else {
		printf("Digite o código, nome do livro e seu autor: ");
		scanf("%s", &pilha_livros.dados[pilha_livros.fim]);
		pilha_livros.fim++;
	}
}


void desempilhar(){
	if(pilha_livros.ini == pilha_livros.fim){
		printf("A pilha de livros está vazia!.\n");
		system("pause");
	}
	else{
		pilha_livros.dados[pilha_livros.fim-1]=0;
		pilha_livros.fim--;
	}
}

void mostrar() {
 	int i; 
 	printf("[ "); 
 	for (i = 0; i < tamanho; i++) {
 		printf("%s ", pilha_livros.dados[i]); 
 	}
 	printf("]\n\n"); 
}

void menu(){
		
	printf("\nEscolha uma opção:\n"); 
	printf("1 - Empilhar\n"); 
 	printf("2 - Desempilhar\n"); 
 	printf("0 - Sair\n\n"); 
 		
}

int main(int argc, char *argv[]) {
	 setlocale(LC_ALL, "Portuguese"); 
	
	op = 1;
	while (op != 0){
	system("cls");
	mostrar();
	menu();
	scanf("%d", &op);
	switch (op){
 		case 1:
 			empilhar_livros();
 			break;
 		case 2:
 			desempilhar();
 			break;
 		case 3:
 			mostrar();
 			break;
	 }	
	 }
	return 0;
}

