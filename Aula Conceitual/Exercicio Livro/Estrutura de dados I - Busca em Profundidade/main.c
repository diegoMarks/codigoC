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
void buscaEmProfundidade();

int main(){
 
 	buscaEmProfundidade();
 	return 0;
}


void buscaEmProfundidade(struct str_no g[], int inicio, int alvo){
int pilha[MAXV]; //pilha
bool visitado[MAXV]; //n�s visitados
int indice = 0; //�ndice do topo da pilha
bool achou = false; //flag de controle (n�o visitados)
int corrente = inicio;
struct str_no *ptr;
int i;
printf("=-=-=-= Busca em Profundidade =-=-=-=\n");

//Marcando os n�s como �n�o visitados�.
for(i=0; i < MAXV; i++){
 visitado[i] = false;
}
while(true){
//N� corrente n�o visitado? Marque como visitado.
//Empilhe o n� corrente.
if(!visitado[corrente]){
printf("VISITANDO: %d. \n", corrente);
if(corrente == alvo)
 {
printf("Alvo encontrado!\n\n\n");
 return;
 }
visitado[corrente] = true;
pilha[indice] = corrente;
indice++;
 }
 
//Buscando por n�s adjacentes, n�o visitados.
achou = false;
for(ptr = g[corrente].proximo; ptr != NULL; 
 ptr = ptr->proximo){
if(!visitado[ptr->id]){
achou = true;
 break;
 }
 }
 
if(achou){
//Atualizando o n� corrente.
corrente = ptr->id;
 }
 else{
//N�o h� v�rtices adjacentes n�o visitados.
//Tentando desempilhar o v�rtice do topo.
indice--;
if(indice==-1){
//N�o h� mais v�rtices n�o visitados.
printf("Encerrando a busca. \n");
 break;
 }
corrente = pilha[indice-1];
 }
}
return;
}





