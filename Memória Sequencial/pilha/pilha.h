#define TAM_MAX 50000 

typedef struct _pilha {
    int vetor[TAM_MAX];
    int topo;
} pilha;

void inicializar();
int verificarVazia();
int verificarCheia();
void push(int dado);
void imprimir();
int pop();

//
int obterDado();
int numeroAleatorio(int low, int high);
void exibirDado(int p);
