#include <stdio.h>
#include <stdlib.h>



typedef struct lista{
		
	int conteudo;
	struct lista *prox;
	}no;
	
	
	
void inserir(int x, no *p){
	no *novo;
	novo = malloc(sizeof(no));
	novo->conteudo= x;
	novo->prox = p->prox;
	p->prox = novo; 	
}




void excluir(no *p){
	no *lixo;
	lixo = p->prox;
	p->prox = lixo->prox;
	free(lixo);		
}



void imprimir(no *le){
	no *p;
	for(p = le; p!=NULL; p->prox){
		printf("%d\n", p->conteudo);
	}
}




int main(int argc, char *argv[]) {
	
	int valor = 6;
	no *le;
	le = malloc(sizeof(no));
	le->prox = NULL;
	
	
	for(int i = 1; i <= 10; i++){
		inserir(valor*i,le);
	}
	
	imprimir(le);
	
	return 0;
}















