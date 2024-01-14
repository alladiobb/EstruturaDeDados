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

void inicializarLista(LISTA l){
    l.nroElem=0;
}

//Há algum problema com este código?
//Qual a diferença entre os códigos?

void inicializarLista(LISTA* l){
    l->nroElem=0;
}

//Na primeira função o parametro é uma lista
//Na segunda é o endereço de umas lista

//Retornar numero de elementos
int tamanho(LISTA* l){
    return l -> nroElem;
}

//Exibição/Impressão
void exibirLista(LISTA* l){
    int i;
    printf("Lista: \" ");
    for(i=0;i<l->nroElem;i++){
        printf("%i",l->A[i].chave)
    }
    print("\"\n")
}

//Buscar por elemento

void buscaSequencial(LISTA* l TIPOCHAVE ch){
    int i=0;
    while(i<l->nroElem){
        if(ch == 1->A[i].chave) return i;
        else i++;
    }
    return -1;
}

//Inserção de um elemento em posição especifica

bool inserirElemLista(LISTA* l, REGISTRO reg, int i){
    int j;
    if((l->nroElem == MAX) || (i<0) || (i > l->nroElem))
        return false;
    for (j = l->nroElem; j>i ; j--) l-> A[j] = l -> A[j-1];
    l -> A[i] = reg;
    l -> nroElem++;
    return true;
}

//