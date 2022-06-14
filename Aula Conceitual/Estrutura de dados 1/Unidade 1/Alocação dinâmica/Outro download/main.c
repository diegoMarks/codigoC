#include <stdio.h>
#include <stdlib.h>


int *p;
int main(void) {

p = (int *) malloc(sizeof(int));

  if(p == NULL){
    printf("Erro!");
  }
  else{
    *p = 10;
  printf("Tamanho de P: %d", *p);
  free(p);
  }
  
  return 0;
}