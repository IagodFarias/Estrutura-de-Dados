#include<iostream>
#include"stack.h"

using namespace std;


int main(){

stack pilha;
tipoitem item; 
int opcao;

do{

cout << "digite a opcao = " << endl;
cin >> opcao;
// 0 sai do programa
// 1 adiciona um item
// 2 remove um item
// 3 
// 4


if (opcao == 1)
{
    cout << "Qual o item: ";
    cin >> item;
    pilha.push(item);
}
else if(opcao == 2)
{
    item = pilha.pop();
} 
}
while(opcao != 0);

return 0;
}