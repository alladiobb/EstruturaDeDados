#include<stdio.h>
#include<malloc.h>

typedef int bool;
typedef int TIPOCHAVE;

typedef struct{
        TIPOCHAVE chave;
        //OUTROS CAMPOS...
}REGISTRO;

typedef struct aux {
    REGISTRO reg;
    struct aux* prox;
}ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct {
    PONT inicio;
}LISTA;

void inicializarLista(LISTA* l){
    l->inicio = NULL;
}

int tamanhoLista(LISTA* l){
    PONT end = l->inicio;
    int tam = 0;
    while(end != NULL){
        tam++;
        end = end->prox;
    }
    return tam;
}

void exibirLista(LISTA* l){
    PONT end = l->inicio;
    printf ("Lista: \" ");
    while(end != NULL){
        printf ("%i ", end->reg.chave);
        end = end->prox;
    }
    printf ("\"\n");
}

PONT buscarSequencial(LISTA *1, TIPOCHAVE ch){
    PONT pos = l->inicio;
    while(pos != NULL){
        if(pos->reg.chave == ch) return int pos;
        pos = pos->prox;
    }
    return NULL;
}

PONT buscarSequencialOrdenada(LISTA *1, TIPOCHAVE ch){
    PONT pos = l->inicio;
    while(pos != NULL && pos->reg.chave < ch) pos = pos->prox;
    if(pos != NULL && pos->reg.chave == ch) return pos;
    return NULL;
}

