#include<iostream>
using namespace std;

struct Node{
    int data ;
    Node* next;

    Node(int value){
        data = value;
        next= NULL;
    }

};

class LinkedList {
    public:
    Node* head;

    LinkedList(){
        head=NULL;
    }

    void insertAtEnd(int value){
    Node* newNode = new Node(value);

    //  if there was no element present before
    if(head==NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
     while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;

}

void display(){
    Node* temp = head;

    while(temp!= NULL){
        cout<<temp->data<<" -> ";
        temp= temp->next;
    }
    cout<<"NULL";
}



};

int main(){
    LinkedList L;
    L.insertAtEnd(10);
    L.insertAtEnd(20);
    L.insertAtEnd(30);
    L.insertAtEnd(40);

    L.display();

    return 0;
}