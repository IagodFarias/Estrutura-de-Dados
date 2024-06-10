#include<iostream>
#include "pilhadinamica.h"
#include <cstddef>


using namespace std;



pilhadinamica::pilhadinamica() {
    topo = nullptr;
}
pilhadinamica:: ~pilhadinamica(){ // função destructor é chamada automáticamente quando a vida util do objeto deixar de existir.

while (topo != nullptr) {
        node* temp = topo;  // copio o ponteiro do topo 
        topo = topo->proximo; // topo = (topo*).proximo  --  movo o ponteiro do topo
        delete temp;    // desaloco a memoria 
    }


}

//métodos

bool pilhadinamica:: isfull(){

        // se a memória do computador estiver cheia.
    node* novo;    
    try {
            novo = new node;
            delete novo;
            return false;         

    } catch (bad_alloc exception){
        return true;
    }



}
bool pilhadinamica:: isempty(){

    //  se topo == nullptr;
    return (topo == nullptr); // if true so empty else false;

}
TipoItem pilhadinamica::pop(){

 // retorna valores da pilha

 if (isempty()){
    cout << "The stack is empty"<< endl;
 }

 else {
     node *temp = topo;
     TipoItem value = topo->valor;
     topo = topo -> proximo;
     return value;
 }





}
void pilhadinamica:: push(TipoItem Item){

if (isfull()){
    cout << "The stack is full" << endl;
    throw overflow_error("cannot push from a full stack");
}
else {
    node* novo = new node;  // Corrigindo para alocar memória dinamicamente
    novo->valor = Item;
    novo->proximo = topo;
    topo = novo;


}



}
void pilhadinamica:: Print(){

node* temp = topo; // Usar uma variável temporária para iterar sobre a pilha
while (temp != nullptr) {
cout << temp->valor << endl;
temp = temp->proximo;

}





