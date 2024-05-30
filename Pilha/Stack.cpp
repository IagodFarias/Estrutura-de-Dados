
#include<iostream>
#include "stack.h"

using namespace std;



stack::stack() // função construtora
{
   lenght  = 0;
   strutura = new tipoitem[max_item];


}
stack::~stack() // função destrutora
{
    delete [] strutura;

}
bool stack::isfull(){

    return (lenght == max_item);

}
bool stack::isempty()
{

    return (lenght == 0);

}

void stack::push(tipoitem Item)
{

    if (isfull()){
        cout << " Stack is Full" << endl;
    } 
    else{
    
    strutura[lenght] = Item;
    lenght ++;

    } 
    
    
}
tipoitem stack::pop()
{

    if (isempty()){
        cout << "Stack is empty" << endl;
    }
    else{
        lenght -- ;
        return strutura[lenght] ;
    } 

}

tipoitem stack::imprimir(){

cout <<  "[" ;

for(int i =0; i < lenght; i ++){

cout << strutura[i];

}

cout <<  "]" ;

}