#include <iostream>
#include "node.h"
using namespace std;

void Linkedlist::insertNode(int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}


void Linkedlist ::addtohead(int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}


void Linkedlist ::addtotail(int data){
    Node* newNode = new Node(data);
    if (tail == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}



void Linkedlist ::isEmpty(){
    if( head == NULL && tail == NULL){
        cout << "list is empty "<<endl;
    }
    else{
        cout <<"list is not empty"<<endl;
    }
}

void Linkedlist::removefromhead(int nodeoffset) {
    if (head == NULL) {
        cout << "The list is already empty" << endl; // to check if its null or not //
        return;
    }
    if (nodeoffset == 0) {    
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* current = head;
    Node* previous = NULL;
    int i = 0;
    while (current != NULL && i < nodeoffset) {
        previous = current;
        current = current->next;
        i++;
    }
    if (current == NULL) {
        cout << "Node not found" << endl;
        return;
    }
    previous->next = current->next;
    delete current;
}


bool Linkedlist::search(int data) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == data) {
            cout <<"that data exists"<<endl;
            return true;
        }
        temp = temp->next;
    }
    cout<<"That data doesnt exist"<<endl;
    return false;
}

void Linkedlist::traverse() {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

Node* Linkedlist::retrieve(int data, Node** outputNodePointer) {
    Node* curr = head;
    while (curr != NULL) {
        if (curr->data == data) {
            *outputNodePointer = curr;
            return curr;
        }
        curr = curr->next;
    }
    *outputNodePointer = NULL;
    return NULL;
}

void Linkedlist::remove(int data) {
    Node* prev = NULL;
    Node* curr = head;
    while (curr != NULL) {
        if (curr->data == data) {
            if (prev == NULL) { // If the node to be removed is the head
                head = curr->next;
            } else {
                prev->next = curr->next;
            }
            if (curr == tail) { // If the node to be removed is the tail
                tail = prev;
            }
            delete curr;
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}





