#include <stdio.h>
#include <stdlib.h>

#define tamanho 5

int main() {


int vet[tamanho];
int i;

 for(i=0;i<tamanho;i++){
 	printf("Insira o elemento da pos. %d do vetor: ",i);
 	scanf("%d", &vet[i]);
 }

for(i=0;i<tamanho;i++){
	if(vet[i] % 2 == 1){
		printf("%d ", vet[i]);	
	}
 }

	return 0;
}
