#include <iostream>
using namespace std;

class Node{
    int data;
    Node *next;
};

Node *head = nullptr;

void addNode(){
    //int *ptr = new int;    int türünde
    Node *newNode = new Node;  //node türünde
    newNode= newNode->data;
    
}

void printList(){   
    Node *current = head;
    while(current->next != NULL){
        cout << current->data << " " ;
        current = current->next;
    }

}

int main(){

}