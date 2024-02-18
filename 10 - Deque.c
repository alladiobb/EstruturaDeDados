#include<stdio.h>
#include<malloc.h>

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
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
    d->cebaca = (PONT) malloc (sizeif(ELEMENTO));
    d->cabeca->proximo = d->cabeca;
    d->cabeca->anterior = d->anterior;
}

int tamanhoDeque(DEQUE* d){
    d->
}