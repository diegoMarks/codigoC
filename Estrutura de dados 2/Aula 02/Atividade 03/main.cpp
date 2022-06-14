#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



#define tamanho 5


int vet[tamanho] = {10,20.,30,40,50};
int *p;

int main(int argc, char** argv) {
	
for(p = &vet; 1; p += 1){
	printf("Elemento atual o vetor: %d \n", *p);
	printf("Deseja imprimir o próximo elemento (digite 1 para prosseguir)?\n");
	scanf("%d", &i);
	if(i != 1){
		break;
	}
}
	
	return 0;
}
