#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int i;
int *p1;

int main(int argc, char** argv) {
	
	i = 10;
	
	p1 = &i;
	
	printf("Conte�do de i: %d, endere�o de i: %x\n", i, &i);
	
	printf("Conte�do de p1: %x, conte�do da var. p/ a qual p1 aponta: %d\n\n", p1, *p1);
	
	
	
	return 0;
}
