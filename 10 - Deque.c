#include<stdio.h>
#include<malloc.h>

typedef int Chave;

typedef struct{
    Chave chave;
}REGISTRO;

typedef struct aux{
    REGISTRO registro;
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
    d->cabeca->anterior = d->cabeca;
}

int tamanhoDequeProximo(DEQUE* d){
    PONT endereco = d->cabeca->prox;
    int tamanho =0;
    while (endereco != d->cabeca){
        tamanho++;
        endereco = endereco->proximo;
    }
    return tamanho;
}

int tamanhoDequeAnterior(DEQUE* d){
    PONT endereco = d->cabeca->anterior;
    int tamanho =0;
    while (endereco != d->cabeca){
        tamanho++;
        endereco = endereco->anterior;
    }
    return tamanho;
}

void tamanhoDequeAnterior(DEQUE* d){
    PONT enderecoElem = d->cabeca->anterior;
    printf("Deque partindo do Fim: \" ");
    while (enderecoElem != d->cabeca){
        printf("%i ", enderecoElem->registro.chave);
        enderecoElem = enderecoElem->anterior;

    }
    print("\"\n");
}

void tamanhoDequeComeco(DEQUE* d){
    PONT enderecoElem = d->cabeca->proximo;
    printf("Deque partindo do Comeco: \" ");
    while (enderecoElem != d->cabeca){
        printf("%i ", enderecoElem->registro.chave);
        enderecoElem = enderecoElem->proximo;
    }
    print("\"\n");
}