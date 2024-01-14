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

void inicializarLista(LISTA 1){
    1.nroElem=0;
}

//Há algum problema com este código?
//Qual a diferença entre os códigos?

void inicializarLista(LISTA* 1){
    1->nroElem=0;
}

//Na primeira função o parametro é uma lista
//Na segunda é o endereço de umas lista