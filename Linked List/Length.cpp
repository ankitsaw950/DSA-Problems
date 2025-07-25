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

int getLength(){
    Node* temp = head ;
    int count = 0;

    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

int getMiddle(){
    int length = getLength();

    int mid = length/2;

    Node* temp = head;

    while(mid--){
        temp = temp->next;
    }

    return temp->data;
}


int hareAndTotorise (){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast-> next !=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

void reverse(){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward;
    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    head = prev;
}


void Delete(){
    if(head == NULL || head->next==NULL){
        return;
    }

    Node* prev = NULL;
    Node* slow =head;
    Node* fast = head;

    while(fast!= NULL && fast->next != NULL){
        fast =fast ->next->next;

        prev = slow;
        slow = slow->next;
    }

    prev->next = slow->next;
    delete slow;

}


int main(){
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(50);
    insertAtEnd(60);

    cout<<"Displaying before the delete : "<<endl;
    display();

    // reverse();
    Delete();

    cout<<"\nDisplaying after the delete : "<<endl;
    display();

    // int val = getLength();

    // cout<<"\n The length of the linked list :"<<val;

    // int mid = hareAndTotorise();
    // cout<<"\nMiddle of the linked list :"<<mid;
  

    return 0;
}




