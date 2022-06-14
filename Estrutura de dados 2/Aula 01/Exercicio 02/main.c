#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int a,b,i;
	
	printf("Valor de A: ");
	scanf("%d",&a);
	printf("Valor de B: ");
	scanf("%d",&b);
	
	
	while (i <= b) {
		if(i % 2 != 0){
			printf("%d ",i);
		}
		i++;
	}
	
	
	
	return 0;
}
