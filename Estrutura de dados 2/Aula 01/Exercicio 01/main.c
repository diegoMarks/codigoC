#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int a,b,i;
	
	printf("Valor de A: ");
	scanf("%d",&a);
	printf("Valor de B: ");
	scanf("%d",&b);
	
	
	for (i = a;i <= b;i++) {
		if(i % 2 != 0){
			printf("%d ",i);
		}
	}
	
	
	return 0;
}
