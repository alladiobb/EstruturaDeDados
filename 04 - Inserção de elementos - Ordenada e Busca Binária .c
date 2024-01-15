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

bool inserirElemListaOrd(LISTA* l, REGISTRO reg){
    if(l->nroElem >= MAX) return false;
    int pos = l->nroElem;
    while (pos > 0 && l->A[pos-1].chave > reg.chave){
        l->A[pos] = l->A[pos-1];
        pos--;
    }
    l->A[pos] = reg;
    l->nroElem++;
}

int buscaBinaria(LISTA l, TIPOCHAVE ch){
    int esq, dir, meio;
    esq = 0;
    dir = l->nroElem-1;
    while(esq <= dir){
        meio = ((dir+esq)/2)
        if(l->A[meio].chave==ch)return meio;
        else{
            if(l->A[meio].chave<ch) esq = meio + 1;
            else dir = meio -1;
        }
    }
    return -1;
}

bool excluirElemLista(LISTA* 1, TIPOCHAVE ch){
    int pos, j;
    pos = buscaBinaria(l,ch);
    if(pos == -1) return false;
    for (j=pos; j < l-> nroElem-1; j++) l->A[j] = l->A[j+1];
    l->nroElem--;
    return true;
}