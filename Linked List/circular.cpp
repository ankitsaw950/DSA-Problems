#include<iostream>
using namespace std;

struct  Node
{
    int data;
    Node* next;

    Node(int value){
        data =value;
        next=NULL;
    }
};


Node* head = NULL;

void insertAtEnd(int value){
    Node* newNode = new Node(value);

    if(head == NULL){
        head = newNode;
        newNode->next = head;
        return ;
    }

    Node* temp = head;

    while(temp->next!=head){
        temp=temp->next;
    }

    temp -> next = newNode;
    newNode->next = head;

}

void display(){
    if(head == NULL) return;

    

    Node* temp = head;

    do{
        cout<<temp->data<<" -> ";
        temp = temp->next;

    }while(temp!=head);

    cout<<"(head)"<<endl;
}


int main(){

    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);

    display();

    return 0;
}