#include<stdio.h>
#include<malloc.h>

#define MAX 50
#define true 1
#define false 0

typedef int bool;
typedef int Chave;

typedef struct{
    Chave chave;
}REGISTRO;

typedef struct{
    REGISTRO registros[MAX];
    int inicio;
    int numeroElementos;
}FILA;

void inicializa(FILA* fila ){
    fila->inicio = 0;
    fila->numeroElementos = 0;
}

int tamanho(FILA* fila){
    return fila->numeroElementos;
}

void imprimirFila(FILA* fila){
    printf("Fila: \" ");
    int i = fila->inicio;
    int temp;
    for (temp = 0; temp < fila->numeroElementos; temp++)
    {
        printf("%i ", fila->registros[i].chave);
        //Essa linha abaixo é crucial para o funcionamento da função imprimirFila.
        //Ela garante que o loop percorra todos os elementos da fila sem acessar elementos fora do array.
        i = (i + 1) % MAX;
    }
    printf("\"n");
}

int inserirElementoFila(FILA* fila, REGISTRO registro){
    if (fila->numeroElementos >= MAX) return false;
    //Essa linha abaixo é crucial para o funcionamento da função inserir
    //Ela garante que adição na última posição da fila. 
    int posicao = (fila->inicio + fila->numeroElementos) % MAX;
    
    fila->registros[posicao] = registro;
    fila->numeroElementos++;
    return true;
}