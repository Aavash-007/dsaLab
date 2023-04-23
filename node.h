#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(){
        data = 0;
        next = NULL;  
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist {
    Node* head;
    Node* tail;
  
public:
    Linkedlist() {
         head = NULL;
         tail = NULL;
     }
    void insertNode(int data);
    void addtohead(int data);
    void addtotail(int data);
    void removefromhead(int nodeoffset);
    void isEmpty();
    bool search(int data);
    Node* retrieve(int data, Node** outputNodePointer);
    void traverse();
    void remove(int data);
};



  