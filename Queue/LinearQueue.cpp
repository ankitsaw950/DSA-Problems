#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int front;
    int rear;
    int size;
    int capacity;

public:
    // Constructor
    Queue(int cap)
    {
        capacity = cap;
        arr = new int[capacity];
        front = 0;
        rear = 0;
        size = 0;
    }

    //  Function to maintain / manage  the queue

    void eneque(int val)
    {
        if (size == capacity)
        {
            cout << "Queue is full \n";
            return;
        }

        arr[rear] = val;
        rear++;
        size++;
    }

    void dequeue()
    {

        if (size == 0)
        {
            cout << "Queue is empty \n";
            return;
        }

        front++;
        size--;
    }

    int getFront()
    {
        if (size == 0)
        {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    int getBack()
    {
        if (size == 0)
        {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[rear - 1];
    }

    bool isEmpty()
    {
        return size == 0;
    }

    bool isFull()
    {
        return size == capacity;
    }

    ~Queue()
    {
        delete[] arr;
    }
};

int main()
{
    Queue q(5);

    q.eneque(10);
    q.eneque(20);
    q.eneque(30);
    q.eneque(40);

    cout << "Front :" << q.getFront() << endl;
    // cout<<"back :"<<q.getBack()<<endl;
    q.dequeue();

    cout << "Front :" << q.getFront() << endl;
    // cout<<"back :"<<q.getBack()<<endl;
    q.eneque(70);
    q.eneque(80);
    q.eneque(90);

    cout << "back :" << q.getBack() << endl;

    return 0;
}