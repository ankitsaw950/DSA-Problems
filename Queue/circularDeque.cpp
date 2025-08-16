#include<iostream>
using namespace std;

class Deque{
    private:
    int *arr;
    int front, rear, capacity,size;

    public:
    Deque(int cap){
        capacity=cap;
        arr = new  int[capacity];
        front =-1;
        rear =0;
        size=0;
    }

    bool isFull(){
        return size == capacity;
    }

    bool isEmpty(){
        return size==0;
    }


    void insertFront(int x){
        if(isFull()){
            cout<<"The Deque is full."<<endl;
            return;
        }

        if(front==-1){
            front=rear=0;
        } else{
            front = (front+capacity-1)%capacity;
        }

        arr[front]=x;
        size++;
    }

    void insertRear(int x){
        if(isFull()){
             cout<<"The Deque is full."<<endl;
            return;
        }

        if(front==-1){
             front=rear=0;
        } else{
            rear = (rear+1)%capacity;
        }

        arr[rear]=x;
        size++;
    }

    void deleteFront(){
        if(isEmpty()){
            cout<<"The Deque is empty."<<endl;
            return;
        }

        if(front == rear ){
            front = rear =-1;
        } else{
            front = (front+1)%capacity;
        }
        size--;
    }
    void deleteRear(){
         if(isEmpty()){
            cout<<"The Deque is empty."<<endl;
            return;
        }

        if(front == rear ){
            front = rear =-1;
        } else{
             rear = (rear+capacity-1)%capacity;
        }
        size--;
    }

    int getFront(){
         if(isEmpty()){
            cout<<"The Deque is empty."<<endl;
            return -1;
        }
        return arr[front];
    }

    int getRear(){
         if(isEmpty()){
            cout<<"The Deque is empty."<<endl;
            return -1;
        }

        return arr[rear];
    }

    void display(){
         if(isEmpty()){
            cout<<"The Deque is empty."<<endl;
            return;
        }
        int i = front;
        cout <<"Deque elements are : ";
       for(int count = 0;count<size;count++){
        cout<<arr[i]<<" ";
        i = (i+1)%capacity;
       }
        cout<<endl;
    }

};
int main()
{

    Deque dq(5);
    dq.insertFront(10);
    dq.insertRear(20);
    dq.insertFront(30);

    dq.display();

return 0;
}