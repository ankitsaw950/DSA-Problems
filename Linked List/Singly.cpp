#include<iostream>
using namespace std;

// Create the sructure for the Node 
// For creating the structure , we use the keyword (struct).

struct Node{
    int data ;
    Node* next;

    Node(int value){
        data = value;
        next= NULL;
    }

};

// Global variable that will be accessed throughout the code
Node* head = NULL;

// Insert the element at end
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


int main(){
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(1);
    insertAtEnd(8);

    display();

    return 0;
}