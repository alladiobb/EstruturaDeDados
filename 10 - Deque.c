#include<stdio.h>
#include<malloc.h>

typedef int Chave;

typedef struct{
    Chave chave;
}REGISTRO;

typedef struct aux{
    REGISTRO reg;
    struct aux* proximo;
    struct aux* anterior;
}ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct{
    PONT cabeca;
}DEQUE;

void inicializar(DEQUE* d){
    d->cabeca = (PONT) malloc (sizeof(ELEMENTO));
    d->cabeca->proximo = d->cabeca;
    d->cabeca->anterior = d->anterior;
}

int tamanhoDequeProximo(DEQUE* d){
    PONT endereco = d->cabeca->prox;
    int tamanho =0;
    while (end != d->cabeca){
        tamanho++;
        endereco = endereco->proximo;
    }
    return tamanho;
}

int tamanhoDequeAnterior(DEQUE* d){
    PONT endereco = d->cabeca->anterior;
    int tamanho =0;
    while (end != d->cabeca){
        tamanho++;
        endereco = endereco->anterior;
    }
    return tamanho;
}
