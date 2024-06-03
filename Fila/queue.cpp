#include<iostream>
#include "queue.h"

using namespace std;




queue:: queue(){ // construtor


estrutura_queue = new tipoItem[Max_Item]; // foi alocado memória suficiente para um array de tamano MAx_item;
first = 0; // aponta para o próximo valor que será adicionado
last = 0; // aponta para o valor que será retirado da fila



} 
queue:: ~queue(){ // destrutor

delete [] estrutura_queue;



} 

bool  queue::isfull(){ // retira valores da fila;

    return ((last + 1) % Max_Item == first); // se for verdade a lista está cheia


}
bool queue::isempty(){  // verificar se a fila está cheia
    
    return (first == last); // se verdade a lista está vazia;

} 

void queue::insert(tipoItem Item) { // insere valores na fila
    if (isfull()) {
        cout << "The queue is full!" << endl;
    } else {
        estrutura_queue[last] = Item;
        last = (last + 1) % Max_Item; // incrementa last circularmente
    }
}

tipoItem queue::remove() { // remove valores da fila
    if (isempty()) {
        cout << "The queue is empty" << endl;
        return -1; // valor de retorno de erro, ajuste conforme o tipo de dados de tipoItem
    } else {
        tipoItem item = estrutura_queue[first];
        first = (first + 1) % Max_Item; // incrementa first circularmente
        return item;
    }
}


                            //imprime os valores da fila
void queue::Print() {
    if (isempty()) {
        cout << "The queue is empty." << endl;
    } else {
        cout << "Queue contents: ";
        for (int i = first; i < last; ++i) {
            cout << estrutura_queue[i] << " ";
        }
        cout << endl;
    }
}