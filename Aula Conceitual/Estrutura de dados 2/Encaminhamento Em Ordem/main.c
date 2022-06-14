#include <stdio.h>
#include <stdlib.h>


//Caminhamento em Ordem
void emOrdem(NO* raiz){
	if(raiz){
		emOrdem(raiz->esq);
		printf("%d \t", raiz->dado);
		emOrdem(raiz->dir);
	}
}






int main(int argc, char *argv[]) {
	return 0;
}
