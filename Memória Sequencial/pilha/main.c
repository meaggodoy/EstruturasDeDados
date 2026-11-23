#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include <time.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int opcao;
	double start, finish, elapsed; 
    int quantidade, p; 

	printf("Digite a quantidade de elementos para testar: "); 
	scanf("%d", &quantidade); 
	inicializar();



	do {
		//exibir o menu
		printf("\n    MENU");
		printf("\n1. Inserir");
		printf("\n2. Remover");
		printf("\n3. Imprimir");
		printf("\n0. Sair");
		printf("\nDigite a opcao desejada: ");
		
		//ler a opcao desejada pelo usuario
		scanf("%d", &opcao);
		
		//processar a funcionalidade
		switch(opcao) {
			case 1:
				//PUSH()
                start = (double) clock(); 
                for(int i = 0; i < quantidade; i++) { 
					p = obterDado(); 
					push(p);
                }

				//CLOCK FINISH
                finish = (double) clock();
		        elapsed = finish - start;
		        printf("\nForam utilizados %.2f clocks", elapsed);
				break;
			case 2:
			    inicializar();
				for(int i = 0; i < quantidade; i++) { 
					p = obterDado(); 
					push(p);
                }

				//POP()
			    start = (double) clock(); 
                for(int i = 0; i < quantidade; i++) { 
					  p = pop();
					exibirDado(p);
                }

				//CLOCK FINISH
                finish = (double) clock();
		        elapsed = finish - start;
		        printf("\nForam utilizados %.2f clocks", elapsed);
				break;
			case 3:
				inicializar();
				for(int i = 0; i < quantidade; i++) { 
					p = obterDado(); 
					push(p);
                }

				//IMPRIMIR
			    start = (double) clock(); 
				imprimir();

				//CLOCK FINISH
				finish = (double) clock();
		        elapsed = finish - start;
		        printf("\nForam utilizados %f clocks", elapsed);
				break;
			case 0:
				printf("Encerrando o programa...");
				break;
			default:
				printf("\nOpcao invalida. Escolha um numero valido de opcao.");
		}
		
	} while(opcao != 0);
}

