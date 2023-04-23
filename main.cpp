#include <iostream>
#include "Linkedlist.h"
using namespace std;

int main(){
   Linkedlist list;
   list.addtotail(2);
    list.addtohead(5);
    list.addtohead(10);
    list.addtohead(15);
 
    list.removefromhead(1);

    list.traverse();

    list.isEmpty();
    list.search(15);
    list.remove(2);
    Node* outputNode;
    Node* result = list.retrieve(5, &outputNode);
    if (result != NULL) {
    cout << "Node found. Address: " << outputNode << endl;
    } else {
    cout << "Node not found." << endl;
}

}