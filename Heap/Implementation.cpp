#include <iostream>
using namespace std;

class MaxHeap
{
    private:
    int arr[5];
    int size ;

    public:
    MaxHeap(){
        size = 0;
    }

    void insert(int val){
        arr[size] = val;
        int i = size;
        size++;

        // Step up , arrange the inserted node to its correct position

        while(i>0){
            int parent = (i-1)/2;

            if(arr[parent] < arr[i]){
                swap(arr[parent],arr[i]);
                i = parent;
            }
            else{
                break;
            }
        }

    }


    void deleteNode(){
        if(size ==0 ){
            cout<<"No element to delete .\n";
            return;
        }

        cout<<arr[0]<<" is deleted .\n";
        arr[0] = arr[size-1];
        size--;

        // Now we need to place root element at its correct position

        int i = 0;

        while(true){
            int left =  2*i + 1;
            int right =  2*i + 2;

            int largest = i;

            if(left < size && arr[largest]< arr[left]){
                largest = left;
            }

            if(right < size && arr[largest]< arr[right]){
                largest = right;
            }

            if(largest != i){
                swap(arr[largest],arr[i]);
                i = largest;
            } else{
                break;
            }
        }
    }

    void printHeap(){
        cout<<"Printing the heap elements : \n";
        for(int i =0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

;
int main()
{

    MaxHeap h;
    h.insert(1);
    h.insert(12);
    h.insert(11);
    h.insert(4);
    h.insert(15);
    // h.insert(1);

    h.printHeap();
    return 0;
}