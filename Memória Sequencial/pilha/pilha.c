#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include <time.h>
#include <math.h>

pilha p;

void inicializar() {
	p.topo = -1;
}

int verificarVazia() {
	if(p.topo == -1)
		return 1;
	else 
		return 0;
}

int verificarCheia() {
	if(p.topo == TAM_MAX - 1)
		return 1;
	else 
		return 0;
}

int numeroAleatorio(int low, int high) { 
    int k; 
    double d; 

    d = (double) rand () / ((double) TAM_MAX + 1); 
    k = d * (high - low + 1); 
	
    return low + k; 
} 

int obterDado() { 
return numeroAleatorio(0, TAM_MAX); 
} 

void exibirDado(int p) { 
printf("\nElemento: %i", p); 
} 



void push(int dado) {
	//verificar se a pilha nao estah cheia
	if(!verificarCheia()) {
		//atualiza o topo da pilha
		p.topo++;
        //insere o elemento no vetor na posicao topo
        p.vetor[p.topo] = dado;
	}else{
    //se estiver cheia, informa o usuario
	   printf("Sua pilha estah cheia!");
	}
}

void imprimir() {
    //verificar se a pilha nao esta vazia
	if(!verificarVazia()){
        //define uma variavel auxiliar
		int i = 0;
        //percorre o vetor do topo ate a base
        for(i = p.topo; i != 0 ; i--){
			//imprimir o elemento na posicao
			printf("\t%d ", p.vetor[i]);
		}
	}else{
        //se estiver vazia, informa o usuario
		printf("Sua pilha estah vazia");
	}	
}

int pop() {
    //verificar se a pilha nao estah vazia
	if(!verificarVazia()){
        //define variavel aux
	int aux = 0;
        //aux ira guardar o elemento do topo da pilha
		aux = p.vetor[p.topo];
        //atualiza o topo da pilha
		p.topo--;
        //retorna numero removido
		return aux;

	}else{
	   	//se estiver vazia, informa o usuario
		printf("Sua pilha estah vazia");
	}
}

