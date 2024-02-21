#define true 1
#define false 0
#define MAX 50

typedef int bool;

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
    //outros campos...
}REGISTRO;

typedef struct{
    REGISTRO A[MAX];
    int nroElem;
}LISTA;

// Funções de gerenciamento

// Implementaremos funções para:
//     Inicializar a estrutura
//     Retornar a quantidade de elementos válidos
//     Exibir os elementos da estrutura
//     Buscar por um elemento na estrutura
//     Inserir elementos na estrutura
//     Excluir elementos da estrutura
//     Reinicializar a estrutura

// Inicialização
//     Para inicializar uma estrutura qualquer, precusanis oebsar bis vakires adequados para cada um dos campos da nossa estrutura
//         Para inicializar um lista sequencial já criada pelo usuário, só precisamo colocar o valor 0(zero) no número de de elementos válidos

void inicializarLista(LISTA lista){
    lista.nroElem=0;
}

//Há algum problema com este código?
//Qual a diferença entre os códigos?

void inicializarLista(LISTA* lista){
    lista->nroElem=0;
}

//Na primeira função o parametro é uma lista
//Na segunda é o endereço de umas lista

//Retornar numero de elementos
int tamanho(LISTA* lista){
    return l -> nroElem;
}

//Exibição/Impressão
void exibirLista(LISTA* lista){
    int i;
    printf("Lista: \" ");
    for(i=0;i<lista->nroElem;i++){
        printf("%i",lista->A[i].chave);
    }
    print("\"\n");
}

//Buscar por elemento
int buscaSequencial(LISTA* lista, TIPOCHAVE ch){
    int i=0;
    while(i<lista->nroElem){
        if(ch == lista->A[i].chave) return i;
        else i++;
    }
    return -1;
}

//Inserção de um elemento em posição especifica
bool inserirElemLista(LISTA* lista, REGISTRO reg, int i){
    int j;
    if((lista->nroElem == MAX) || (i<0) || (i > lista->nroElem))
        return false;
    for (j = lista->nroElem; j>i ; j--) lista-> A[j] = lista -> A[j-1];
    lista -> A[i] = reg;
    lista -> nroElem++;
    return true;
}

//Exclusão Elemento
bool excluirElemLista(TIPOCHAVE ch, LISTA* lista){
    int pos, j;
    pos = buscaSequencial(lista,ch);
    if(pos == -1) return false;
    for (j = pos; j < lista->nroElem-1; j++)
        lista -> A[j] = lista -> A[j+1];
    lista->nroElem--;
    return true;
}