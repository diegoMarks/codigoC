#include <stdio.h>
#include <stdlib.h>


int main() {
	
	typedef struct{
		int dia, mes, ano;
	}data;
	
	int i = 1234;
	
	printf("Tamanho de data %d bytes.\n",(int)sizeof(data));
	printf("Variavel i = %d\n", i);
	printf("Endereco de i = %ld\n", (long int) &i);
	printf("Endereco de i em Hexadecimal = %p\n", (void *) &i);
		
	return i;
}


