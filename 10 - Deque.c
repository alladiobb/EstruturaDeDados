#include<stdio.h>
#include<malloc.h>

#define true 1
#define false 0
typedef int bool;

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
    PONT endereco = d->cabeca->proximo;
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

void tamanhoDequeProximo(DEQUE* d){
    PONT enderecoElem = d->cabeca->proximo;
    printf("Deque partindo do Comeco: \" ");
    while (enderecoElem != d->cabeca){
        printf("%i ", enderecoElem->registro.chave);
        enderecoElem = enderecoElem->proximo;
    }
    print("\"\n");

}

bool adicionarDequeProximo(DEQUE* d, REGISTRO registroNovo){
    PONT posiMallocNovo = (PONT) malloc (sizeof(ELEMENTO));
    
    posiMallocNovo->registro = registroNovo;
    posiMallocNovo->proximo = d->cabeca;
    posiMallocNovo->anterior = d->cabeca->anterior;
   
    d->cabeca->anterior = posiMallocNovo;

    posiMallocNovo->anterior->proximo =  posiMallocNovo;

    return false;
}

