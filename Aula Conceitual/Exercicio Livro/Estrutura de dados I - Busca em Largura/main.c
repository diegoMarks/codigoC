//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//N�mero m�ximo de v�rtices
#define MAXV 8

//Estrutura de um n�
typedef struct str_no {
int id;
struct str_no *proximo;
} str_no;

//Grafo
struct str_no grafo[MAXV];

//Prototipa��o
void buscaEmLargura();

int main(int argc, char *argv[]) {
	buscaEmLargura();
	return 0;
}

void buscaEmLargura(struct str_no g[], int inicio, int alvo){
int fila[MAXV]; //fila
bool visitado[MAXV]; //n�s visitados
int indice = 0; //controle da fila
bool achou = false; //flag (n�o visitados)
int corrente = inicio;
struct str_no *ptr;
int i;
printf("=-=-=-= Busca em Largura =-=-=-= \n");

//Marcando os n�s como �n�o visitados�.
for(i=0; i < MAXV; i++)
 visitado[i] = false;
 
//Partindo do primeiro v�rtice.
printf("VISITANDO: %d. \n", corrente);
visitado[corrente] = true;
fila[indice] = corrente;
indice++;

while(true){
//Visitar os n�s adjacentes ao v�rtice corrente
for(ptr = g[corrente].proximo; ptr != NULL; ptr = 
 ptr->proximo){
 	
//Caso corrente ainda n�o tenha sido visitado:
corrente = ptr->id;
if(!visitado[corrente]){
//Enfileira e marca como visitado.
printf("VISITANDO: %d. \n", corrente);
if(corrente == alvo)
 {
printf("Alvo encontrado!\n\n\n");
 return;
 }
visitado[corrente] = true;
fila[indice] = corrente;
indice++;
 }
 }
 
//Caso a fila n�o esteja vazia:
if(indice!=0)
 {
//Atualizando v�rtice corrente.
corrente = fila[0];

//Desenfileirando o primeiro v�rtice.
for(i=1;i<indice+1;i++)
fila[i-1]=fila[i];
indice--;
 }
 else
 {
 	
//N�o h� mais v�rtices para visitar.
printf("Encerrando busca.\n");
 break;
 }
}
return;
}
