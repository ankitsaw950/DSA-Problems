#include<iostream>
using namespace std;


struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }
};


Node* head = NULL;

void insertAtEnd(int value){
    Node* newNode = new Node(value);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void displayForward(){
    Node* temp = head;
    while (temp!=NULL){
        cout<<temp->data << " <-> ";
        temp = temp ->next;
    }
    cout<<" NULL ";
}

void displayBackward(){
    if(head== NULL) return;

    // Go to the last node
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }

    while(temp!=NULL){
        cout<<temp->data<<" <-> ";
        temp = temp->prev;
    }
    cout<<" NULL ";
}

int main(){
    insertAtEnd(10);
    insertAtEnd(80);
    insertAtEnd(60);
    insertAtEnd(20);

    cout<<"Forward : ";
    displayForward();

    cout<<endl;

    cout<<"Backward : ";
    displayBackward();

    return 0;
}
