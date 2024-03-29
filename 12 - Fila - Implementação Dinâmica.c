#include<stdio.h>
#include<malloc.h>

#define true 1
#define false 0

typedef int bool;
typedef int Chave;

typedef struct{
    Chave chave;
}REGISTRO;

//Um pouco diferente e mais enxuta para criar um PONT(ponteiro) para ELEMENTO 
//NÃO precisando dessa linha abaixo 
//typedef ELEMENTO* PONT;

typedef struct aux{
    REGISTRO registro;
    struct aux* proximo;
}ELEMENTO, *PONT;
//Essa linha acima substitui a linha abaixo
// -> typedef ELEMENTO* PONT; <-
//é um outro modo de ciar um ponteiro para elemento


typedef struct{
    PONT inicio;
    PONT final;
}FILA;

void inicializarFila(FILA* fila){
    fila->inicio = NULL;
    fila->final = NULL;
}

int tamanho(FILA* fila){
    int contadorTamanho = 0;
    PONT pontElemento = fila->inicio;
    while(pontElemento->proximo != NULL){
        contadorTamanho ++;
        pontElemento = pontElemento->proximo;
    }
    return contadorTamanho;
}

void imprimirFila(FILA* fila){
    printf("Fila: \" ");
    PONT pontElemento = fila->inicio;
    while (pontElemento->proximo != NULL)
    {
        printf("%i ", pontElemento->registro.chave );
        //Essa linha abaixo é crucial para o funcionamento da função imprimirFila.
        //Ela garante que o loop percorra todos os elementos da fila sem acessar elementos fora do array.
        pontElemento = pontElemento->proximo;
    }
    printf("\"n");
}

bool inserirElementoFila(FILA* fila, REGISTRO registro){
    //if (fila->numeroElementos >= MAX) return false;
    //Essa linha abaixo é crucial para o funcionamento da função inserir
    //Ela garante que adição na última posição da fila. 
    //int posicao = (fila->inicio + fila->numeroElementos) % MAX;
    
    //fila->registros[posicao] = registro;
    //fila->numeroElementos++;
    return true;
}

bool excluirElementoFila(FILA* fila, REGISTRO* registro){
    //if (fila->numeroElementos <= 0) return false;
    //*registro = fila->registros[fila->inicio];
    //Essa linha abaixo é crucial para o funcionamento da função excluir
    //Garante que a primeira posição será alterada para a posição correta
    //fila->inicio = (fila->inicio+1) % MAX;
    //fila->numeroElementos--;
    return true;
}

void reinicializarFila(FILA* fila){
    inicializarFila(fila);
}