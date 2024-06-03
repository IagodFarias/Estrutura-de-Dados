#include<iostream>
#include"queue.h"

using namespace std;


int main(){

queue fila;
tipoItem item; 
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
    fila.insert(item);
    fila.Print();
}
else if(opcao == 2)
{
    item = fila.remove();
    fila.Print();
} 
}
while(opcao != 0);

return 0;
}