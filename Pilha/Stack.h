
#ifndef STACK_H
#define STACK_H


typedef int tipoitem;
const int  max_item = 100;

class stack{
private:
int lenght; // vai me dizer o ponto de acesso para inserção e remoção de dados.
tipoitem * strutura;


public:
//méotodos da estrutura
stack();
~stack();
bool isfull();
bool isempty();
void push(tipoitem Item);
tipoitem pop();
tipoitem imprimir();

};


#endif