#include<stdio.h>
#define MAX 50

#define true 1
#define false 0
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