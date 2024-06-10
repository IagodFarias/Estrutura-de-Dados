

#ifndef QUEUE_LINKED_H
#define QUEUE_LINKED_H


typedef int tipoitem;

struct node {

int value;
node * next;

};

class queue_linked{

private:

node* last;
node* first;

public:
queue_linked();
~queue_linked();

tipoitem pop();
void push(tipoitem item);
bool isfull();
bool isempty();
void Print();


};

#endif