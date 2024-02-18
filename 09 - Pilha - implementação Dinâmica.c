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
int tamanho(PILHA p){
    int tamanho = 0;
    PONTO aux = p.topo;
    while(aux != null){
        tamanho ++;
        end = end->prox;
    }
    return tamanho;
}

bool estaVazia(PILHA* p){
    if (p->topo == NULL)return true;
    return false;
}

void imprimirElementos(PILHA* p){
    PONT endereco = p->topo;
    printf("Lista: \" ");
    while( endereco != null){
        printf("%i ", endereco->reg.chave);
        endereco = endereco->prox;
    }
    printf("\"\n");
}

bool push(PILHA* p, REGISTRO reg){
    PONTO novoElemPont = (PONTO) malloc(sizeof(ELEMENTO));
    novoElemPont->reg = reg;
    novoElemPont->prox = p->topo;
    p->topo = novoElemPont;
    return true;
}


bool pop(PILHA* p, REGISTRO reg){
    if (p->topo == NULL) return false;
    PONT topoApagar = p->topo;
    p->topo = p->topo.prox;
    free(topoApagar);
    return true;
}

//Tira o elemento e retorna o valor retirado
bool popWithReturn(PILHA* p, REGISTRO* reg){
    if (p->topo == NULL) return false;
    *reg = p->topo->reg;
    PONT topoApagar = p->topo;
    p->topo = p->topo.prox;
    free(topoApagar);
    return true;
}


void reinicializarPilha(PILHA* p){
    PONT topoApagar;
    while(p->topo != NULL){
        topoApagar = p->topo;
        free(topoApagar);
        p->topo = p->topo->prox;
    }
    p->topo = NULL;
}