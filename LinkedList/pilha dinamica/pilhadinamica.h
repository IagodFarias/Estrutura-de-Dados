


#ifndef PILHA_DINAMICA_H 
#define PILHA_DINAMICA_H 

typedef int TipoItem;


struct node
{

    TipoItem valor;
    node* proximo;      // estou referenciando a minha própria estrura dentro da estruru, isso só é possível com ponteiros.
};



class pilhadinamica{

private:

node* topo; // ponteiro que aponta para um objeto node.


public:

pilhadinamica();
~pilhadinamica();

//métodos

bool isfull();
bool isempty();
TipoItem pop();
void push(TipoItem Item);
void Print();







};


#endif