#include<stdio.h>
#include<malloc.h>

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
}REGISTRO;

typedef struct aux{
    REGISTRO reg;
    struct aux* prox;
}ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct{
    PONT topo;
}PILHA;

void inicializar(PILHA* p){
    p->topo = NULL;
}


// ---- perceba a diferença entre essas duas opções abaixo!

//Tamanho da pilha passando o endereço da pilha/ponteiro
int tamanho(PILHA* p){
    int tamanho = 0;
    PONTO aux = p->topo;
    while(aux != null){
        tamanho ++;
        end = end->prox;
    }
    return tamanho;
}

//Tamanho da pilha passando uma cópia
int tamanho(PILHA* p){
    int tamanho = 0;
    PONTO aux = p->topo;
    while(aux != null){
        tamanho ++;
        end = end->prox;
    }
    return tamanho;
}

void imprimirElementos(PILHA* p){
    int count = p->topo;
    printf("Lista: \" ");
    while( count != -1){
        printf("%i ", p -> A[count].chave);
        count --;
    }
    printf("\"\n");
}

bool push(PILHA* p, REGISTRO reg){
    if (p->topo >= MAX-1) return false;
    p->topo = p->topo+1;
    p->A[p->topo] = reg;
    return true;
}

bool pop(PILHA* p, REGISTRO* reg){
    if (p->topo == -1) return false;
    *reg p->A[p->topo];
    p->topo = p->topo-1;
    return true;
}

void reinicializarPilha(PILHA* p){
    p->topo  = -1;
}