//  Ainda é um estrutura linear
//  Cada elemento possui no máximo um predecessor e um sucessor
//  A ordem lógica dos elementos (a ordem "vista" pelo usuário) não é a mesma ordem física (em memória principal) dos elementos.
//  Cada elemento precis indicar quem é o seu sucessor

//  Chamaremos de lista ligada implementação estática, porque nosso regstros serão armazenados em um arranjo criado inicialmente.
//  Adicionalmente, cada elemento da nossal lista terá um campo para indicar a posição (no arranjo) de seu sucessor.

#define MAX 50
#define INVALIDO -1

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
    //Outros campos

} REGISTRO;

typedef struct{
    REGISTRO reg;
    int prox;
}ELEMENTO;

typedef struct{
    ELEMENTO A[MAX]
    int inicio;
    int dispo;
}LISTA;

void inicializarLista(LISTA* l){
    int i;
    for (i=0; i<MAX-1; i++)
        l->A[i].prox = i + 1;
    l->A[MAX-1].prox=INVALIDO;
    l->inicio=INVALIDO;
    l->dispo=0;
}

int tamanho(LISTA l){
    int i = l->inicio;
    int tam = 0;
    while (i != INVALIDO){
        tam++;
        i = l->A[i].prox;
    }
}

int exibirLista(LISTA l){
    int i = l->inicio
    printf("Lista: \" ")
    while (i != INVALIDO){
        printf("%i ", l->A[i].reg.chave);
        i = l->A[i].prox;
    }
    printf("\"\n");
}