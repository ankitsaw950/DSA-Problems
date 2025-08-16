#include <iostream>
using namespace std;

class CircularQueue
{

    int *arr;
    int front;
    int rear;
    int size;
    int capacity;
    public:

    CircularQueue(int cap)
    {
        capacity = cap;
        arr = new int[capacity];

        front = 0;
        rear = 0;
        size = 0;
    }

    void enqueue(int val)
    {
        if (size == capacity)
        {
            cout << "Queue if Full \n";
            return;
        }

        arr[rear] = val;
        rear = (rear + 1) % capacity;
        size++;
    }

    void dequeue()
    {
        if (size == 0)
        {
            cout << "Queue is empty";
            return;
        }
        front = (front+1)%capacity;
        size--;
    }

    int getFront(){
        if(size==0){
              cout << "Queue is empty";
            return -1;
        }
        return arr[front];
    }

    bool isEmpty(){
        return size==0;
    }

    bool isFull(){
        return size==capacity;
    }

    void display(){
        if(isEmpty()){
            cout<<"Queue is empty\n";
            return;
        }

        cout<<"Queue elements are : ";
        for(int i = 0;i<size;i++){
            int index = (front+i)%capacity;
            cout<<arr[index]<<" ";
        }
        cout<<endl;
    }


};


int main(){

    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.display();
        cout<<"Front element : "<<q.getFront()<<endl;
    q.dequeue();
    q.display();

    cout<<"Front element : "<<q.getFront()<<endl;


}
