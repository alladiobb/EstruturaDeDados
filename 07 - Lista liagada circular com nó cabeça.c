#include<stdio.h>
#include<malloc.h>

typedef int bool;
typedef int TIPOCHAVE;

typedef struct{
        TIPOCHAVE chave;
        //OUTROS CAMPOS...
}REGISTRO;

typedef struct tempRegistro {
    REGISTRO reg;
    struct tempRegistro* prox;
}ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct {
    PONT cabeca;
}LISTA;

bool inicializarLista(LISTA* l){
    l->cabeca = (PONT) malloc(sizeof(ELEMENTO));
    l->cabeca->prox = l->cabeca;
}

int tamanho(LISTA* l){
    PONT enderecoAux = l->cabeca->prox;
    int tam = 0;
    while(enderecoAux != l->cabeca){
        tam++;
        enderecoAux = enderecoAux->prox;
    }
    return tam;
}


void exibirLista(LISTA* l){
    PONT enderecoAux = l->cabeca->prox;
    printf("Lista: \" ");
    while(enderecoAux != l->cabeca){
        printf("%i ", enderecoAux-> reg.chave);
        enderecoAux = enderecoAux->prox;
    }
    printf("\"\n");
}

PONT buscaSentinela(LISTA* l, TIPOCHAVE ch){
    PONT posicao = l->cabeca->prox;
    l->cabeca->reg.chave = TIPOCHAVE chave;
    while (posicao -> reg.chave != ch) posicao = posicao-> prox;
    if(posicao != l->cabeca) return posicao;
    return NULL;
}

PONT buscaSentinelaOrd(LISTA* l, TIPOCHAVE ch){
    PONT posicao = l->cabeca->prox;
    l->cabeca->reg.chave = TIPOCHAVE chave;
    while (posicao -> reg.chave < ch) posicao = posicao-> prox;
    if(posicao != l->cabeca && posicao->reg.chave == ch) return posicao;
    return NULL;
}

PONT buscaSeqExc(LISTA* l, TIPOCHAVE ch, PONT* anterior){
    *anterior = l->cabeca;
    PONT atual = l->cabeca->prox;
    l->cabeca->reg.chave = TIPOCHAVE chave;
    while (atual->reg.chave<ch){
        *ant = atual;
        atual = atual -> prox;
    }
    if (atual != l-> cabeca && atual ->reg.chave==ch) return atual;
    return NULL;
}

bool inserirElemListaOrd(LISTA* l, REGISTRO reg){
    PONT ant, i;
    i = buscaSeqExc (l,reg.chave,&ant)
    if (i!= NULL) return false;
    i = (PONT) malloc (sizeof(ELEMENTO));
    i->reg = reg;
    i->prox = ant->prox;
    ant->prox = i;
    return true;
}