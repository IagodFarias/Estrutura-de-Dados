
//Guardadadores de HEAD

#ifndef QUEUE_H 
#define  QUEUE_H

typedef int tipoItem;  
const int Max_Item = 100; // define o tamanho da fila

//como criar uma estrutura de dados de fila?

// pointers last, first
// criar a estrutura de fila


class queue{

private:
// dados que so podem ser modificados pela classe
tipoItem* estrutura_queue; // criando a estrura de fila como pointer para permitir alocação dinâmica.
int first, last; // apontadores para o primeiro e o último elemento;

public:
// dados e métodos que podem ser alterados

queue(); // construtor
~queue(); // destrutor

void insert(tipoItem Item); // insere valores a fila
tipoItem remove(); // retira valores da fila;
bool  isfull(); // verificar se a fila está cheia
bool isempty(); // verificar se a fila está vazia
void Print(); // imprime os valores da fila
};






#endif