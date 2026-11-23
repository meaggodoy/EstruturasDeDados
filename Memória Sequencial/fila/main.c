#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAX 50000

int fila[MAX];
int inicio = 0;
int fim = -1;

void enfileirar(int valor) {
if (fim < MAX - 1) {
fim++;
fila[fim] = valor;
} else {
printf("\nA fila está cheia");
}
}

void desenfileirar() {
if (fim >= inicio) {
for (int i = inicio; i < fim; i++) {
fila[i] = fila[i + 1];
}
fim--;
} else {
printf("\nA fila está vazia");
}
}

void mostrar() {
if (fim >= inicio) {
for (int i = inicio; i <= fim; i++) {
printf("%d\t", fila[i]);
}
} else {
printf("\nA fila está vazia");
}
}

int numeroAleatorio(int low, int high) {
return low + rand() % (high - low + 1);
}

int obterDado() {
return numeroAleatorio(0, MAX);
}

void exibirDado(int p) {
printf("\nElemento: %i", p);
}

int main() {

double start, finish, elapsed;  
int quantidade;  
int p;  

srand(time(NULL));  

printf("Digite a quantidade de elementos para testar: ");  
scanf("%d", &quantidade);  

if (quantidade < 1 || quantidade > MAX) {  
    printf("\nQuantidade invalida!");  
    return 1;  
}  



printf("\n\n--- INSERCAO ---");  

start = (double) clock();  

for (int i = 0; i < quantidade; i++) {  
    p = obterDado();  
    enfileirar(p);  
}  

finish = (double) clock();  

elapsed = finish - start;  

printf("\n\nTempo de insercao: %.2f clocks", elapsed);  




printf("\n\n--- LISTAGEM ---\n");  

start = (double) clock();  

finish = (double) clock();  

elapsed = finish - start;  

printf("\n\nTempo de listagem: %.2f clocks", elapsed);  




printf("\n\n--- REMOCAO ---");  

start = (double) clock();  

for (int i = 0; i < quantidade; i++) {  
    desenfileirar();  
}  

finish = (double) clock();  

elapsed = finish - start;  

printf("\n\nTempo de remocao: %.2f clocks", elapsed);  

printf("\n\nFila finalizada!");  

return 0;

}
