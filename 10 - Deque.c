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

void imprimirDequeAnterior(DEQUE* d){
    PONT enderecoElem = d->cabeca->anterior;
    printf("Deque partindo do Fim: \" ");
    while (enderecoElem != d->cabeca){
        printf("%i ", enderecoElem->registro.chave);
        enderecoElem = enderecoElem->anterior;

    }
    print("\"\n");
}

void imprimirDequeProximo(DEQUE* d){
    PONT enderecoElem = d->cabeca->proximo;
    printf("Deque partindo do Comeco: \" ");
    while (enderecoElem != d->cabeca){
        printf("%i ", enderecoElem->registro.chave);
        enderecoElem = enderecoElem->proximo;
    }
    print("\"\n");

}

bool adicionarDequeProximo(DEQUE* deque, REGISTRO registroNovo){
    PONT posiMallocNovo = (PONT) malloc (sizeof(ELEMENTO));
    
    posiMallocNovo->registro = registroNovo;
    posiMallocNovo->proximo = deque->cabeca;
    posiMallocNovo->anterior = deque->cabeca->anterior;
   
    deque->cabeca->anterior = posiMallocNovo;

    posiMallocNovo->anterior->proximo =  posiMallocNovo;
    // Essa segunda linha(abaixo "2 - deque...") pode substituir a próxima sem problema 
    // 2 - deque->cabeca->anterior->proximo = posiMallocNovo;
    
    return false;
}

bool excluirElementoProximo(DEQUE* deque, REGISTRO* registro){
    if (deque->cabeca->proximo == deque->cabeca) return false;
    
    PONT apagar = deque->cabeca->proximo;
    *registro = apagar->registro;
    deque->cabeca->proximo = apagar->proximo;
    deque->cabeca->anterior = deque->cabeca;
    free(apagar);
    return true;
}
