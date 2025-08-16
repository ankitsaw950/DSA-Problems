#include <iostream>
using namespace std;

class Deque
{

private:
    int *arr;
    int front;
    int rear;
    int size;
    int capacity;

public:
    Deque(int cap)
    {
        capacity = cap;
        arr = new int[capacity];

        front = 0;
        rear = -1;
        size = 0;
    }

    // Insertion at front

    void insertFront(int x)
    {

        if (isFull())
        {
            cout << "The deque is full.";
            return;
        }

        // Shifting
        for (int i = size - 1; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }

        arr[0] = x;
        rear++;
        size++;
    }

    // Insertion at back

    void insertRear(int x)
    {
        if (isFull())
        {
            cout << "The deque is full.";
            return;
        }

        rear++;
        arr[rear] = x;
        size++;
    }

    // Deletion at front

    void deleteFront()
    {
        if (isEmpty())
        {
            cout << "The deque is empty.";
            return;
        }
        // Shifting

        for (int i = 0; i < rear; i++)
        {
            arr[i] = arr[i + 1];
        }
        rear--;
        size--;
    }

    // Deletion at rear

    void deleteRear(){
        if(isEmpty()){
            cout<<"The deque is empty.";
            return;
        }

        rear--;
        size--;
    }

    // Get element from front
    int getFront(){
        if(isEmpty()){
            cout<<"The deque is empty.";
            return -1;
        }

        return arr[0];

    }

    // Get element from back
    int getRear(){
        if(isEmpty()){
            cout<<"The deque is empty.";
            return -1;
        }

        return arr[rear];
    }

    // The deque is full or not

    bool isFull()
    {
        return size == capacity;
    }

    // The deque is empty or not

    bool isEmpty()
    {
        return size == 0;
    }

    // Displaying the elements

    void display(){
        if(isEmpty()){
            cout<<"The deque is empty.";
            return;
        }

        cout<<"Deque elements are : ";
        for(int i = 0;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{

    Deque d(5);

    d.insertFront(6); // 6
    d.insertRear(10); // 6 10
    d.insertRear(11); // 6 10 11
    d.insertRear(15); // 6 10 11 15
    d.insertFront(68);
    // d.insertRear(78);

  d.deleteFront();
  d.deleteRear(); // 6 10 11


  d.deleteRear();
  d.deleteRear();
  d.deleteRear();

  
  d.deleteRear();

  cout<<"Front : "<<d.getFront();
  cout<<endl;
  cout<<"Rear : "<<d.getRear();
  cout<<endl;

    
    
    d.display(); 
    // cout<<d.isFull();
    // cout<<d.isEmpty();


    return 0;
}