include<stdio.h>
define MAX 50

define true 1
define false 0
typedef int bool;

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
}REGISTRO;

typedef struct{
    REGISTRO A[MAX];
    int topo;  
}PILHA;

void inicializar(PILHA* p){
    p->topo=-1;
}

int tamanho(PILHA* p){
    int tamanho;
    tamanho = p->topo+1;
    return tamanho;
}

//Tamanho da pilha mais simples
int tamanhoRefact(PILHA* p){
    return p->topo+1;
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
    p->A[p->topo] = reg;
    p->topo = p->topo+1;
    return true;
}

bool pop(PILHA* p, REGISTRO* reg){
    if (p->topo == -1) return false;
    *reg p->A[p->topo];
    p->topo = p->topo-1;
    return true;
}