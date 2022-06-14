#include <stdio.h>
#include <stdlib.h>


int *vetor;
int main(void) {

vetor = (int *) malloc(sizeof(int) * 10);

  if(vetor == NULL){
    printf("Erro!");
  }
  else{
    *vetor = 10;
  printf("Tamanho de P: %d", *vetor);
  free(vetor);
  }
  
  return 0;
}