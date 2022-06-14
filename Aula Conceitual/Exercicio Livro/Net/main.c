		
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
	 	
	typedef struct{
	    unsigned custo[7];  // pesos dos vertices
	    //const char* filial[5]; // nomes para as filiais
	    const char* nome;
	    const char* RA; // mais fácil de testar
	}   Caminho;
	
	Caminho* apaga(Caminho*);
	Caminho* cria(const char*, const char*);
	int mostra(Caminho*);
	
	
	int main( int argc, char** argv){
	    const char*  RA_exemplo = "2113611";
	    char   RA[7] = {0};
	    if (argc < 2){   // vai usar o exemplo mesmo
	        strncpy(RA, RA_exemplo, 7);
	    }else{// tem 7 ou 6
	        if (strlen(argv[1]) >= 7)
	            strncpy(RA, argv[1], 7);
	        else{
	            if (strlen(argv[1]) == 6)
	            {   // se tem so 6 digitos poe '1' no final
	                strncpy(RA, argv[1], 6);
	                RA[6] = '1';
	                RA[7] = 0;
	            }else{
	            	strncpy(RA, RA_exemplo, 7);
				}
	        }
	    };  // if()
	//     cria uma transportadora de teste
	//
	//    Transp* teste = cria(RA, "MS Mundo TR");
	//
	//    mostra(teste);
	//
	//    teste = apaga(teste);
	//
	    return 0;
	
	}
	

	//Transp* apaga(Transp* T)
	//
	//{
	//
	//    free(T);
	//
	//    return NULL;
	//
	//}
	
	//Transp* cria(const char* RA, const char* nome)
	//
	//{
	//
	//    const char* local[] = {
	//
	//        "Matriz - MS 1",
	//
	//        "Paracatu - MG 2",
	//
	//        "Marquinho - PR 3",
	//
	//        "Belo Horizonte - MG 4",
	//
	//        "Porto de Santos - SP 5",
	//
	//    };
	
	    Caminho* tr = (Caminho*)malloc(sizeof(Caminho));
	
		int i;
	    for (i= 0; i < 5; i += 1) tr->filial[i] = local[i];
	    printf("RA: \"%s\"\n", RA);
	    for (i = 0; i < 7; i += 1) tr->custo[i] = 100 * (RA[i] - '0');
	    tr->RA = RA;
	    tr->nome = nome;
	    return tr;
	};
	
	 
	
	int mostra(Transp* tr)
	
	{
	
	    printf("%s\t(RA considerado: '%s')\n\n", tr->nome, tr->RA);
		int i;
	    for (i = 0; i < 5; i += 1) 	printf("    %d  %s\n", 1+i, tr->filial[i]);
	
		 
	
	    printf("\nOs pesos: ");
	
	    for (i = 0; i < 7; i += 1)   	printf("%c=%d ", 'A' + i, tr->custo[i]);
	
	    printf("\n");
	
	    return 0;
	
	}
