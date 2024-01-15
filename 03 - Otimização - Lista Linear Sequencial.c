#define MAX 50

type int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
    //outros campos...
}REGISTRO;

typedef struct{
    REGISTRO A[MAX];
    int nroElem;
}LISTA;

//Iremos criar um elemento sentinela:
//  - Elemento Extra (um registro) adicionando à lista para auxuliar alguma operação;
//  - Será inserido no final da lista (após o último elemento válido) durante as buscas;
//  - Conterá a chave do elemento buscado.

int buscaSentinela(LISTA* 1, TIPOCHAVE ch){
    int i =0;
    //Coloca na última posição o valor: ch 
    l->A[l->nroElem].chave = ch;
    while(l->A[i].chave != ch) i++;
    if(i==l->nroElem) return -1;
    else return i;
}

//Nova lista para que o sempre haja espaço para colocar o sentinela
typedef struct{
    REGISTRO A[MAX+1];
    int nroElem;
}LISTANOVA;