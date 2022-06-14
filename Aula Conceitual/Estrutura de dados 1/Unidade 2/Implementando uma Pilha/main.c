#include <stdio.h>
#include <stdlib.h>



#define tamanho 3


//Criando pilha
struct tipo_pilha{
	int dados[tamanho];
	int ini;
	int topo;
};

	//Criando pilha
	struct tipo_pilha pilha;



//Empilhando dados(PUSH)
	void empilha(int elemento){
		if(pilha.topo == tamanho){
			printf("Fila cheia.\n");
			system("pause");
		}
		else
		{
			pilha.dados[pilha.topo] = elemento;
			pilha.topo++;
		}
	}
	


//Desempilhar dados (POP)
	int desempilha(){
		int elemento;
		if(pilha.topo == pilha.ini){
			printf("Fila vazia.\n");
			system("pause");
		}
		else
		{
			pilha.topo--;
			elemento = pilha.dados[pilha.topo];
			return elemento;
		}
	}


int main(int argc, char *argv[]) {
	return 0;
}
