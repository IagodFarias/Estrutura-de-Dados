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

    return (first - last == Max_Item); // se for verdade a lista está cheia


}
bool queue::isempty(){  // verificar se a fila está cheia
    
    return (first == last); // se verdade a lista está vazia;

} 

void queue:: insert(tipoItem Item){ // insere valores a fila

if (isfull()){
    cout << "The queue is full!" << endl;

}

else
{
    estrutura_queue[last] = Item;
    last++;
}



} 
tipoItem queue:: remove(){

if (isempty()){
    cout << "The queue is empty" << endl;

}
else 
{
    return (first ++);
}

} 

//void queue::Print(){ // verificar se a fila está vazia

//} // imprime os valores da fila