#include <stdio.h>
#include <stdlib.h>


#define tamanho 3
#-std=c99


//Criando estrutura da Fila
struct tipo_fila{
	int dados[tamanho];
	int ini;
	int fim;
};
//Craindo tipo da Fila
struct tipo_fila fila;


//Enfileirar(Push_back)
void enfileira(int elemento){
	if(fila.fim == tamanho){
		printf("Fila cheia.\n");
		system("pause");
	}
	else
	{
		fila.dados[fila.fim] = elemento;
		fila.fim++;
	}
}




//Desenfileirar(Pop)
int desenfileirar(){
	int elemento;
	if(fila.fim == fila.ini){
		printf("Fila vazia.\n");
		system("pause");
	}
	else
	{
		elemento = fila.dados[fila.ini];
		for(int i=0; i<tamanho; i++){
			fila.dados[i] = fila.dados[i+1];
     	};
     	
		fila.dados[fila.fim] = 0;
		fila.fim--;
		return elemento;
	}
}

int main(int argc, char *argv[]) {
	return 0;
}
