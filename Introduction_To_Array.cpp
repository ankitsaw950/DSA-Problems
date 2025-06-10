// #include <iostream>
// using namespace std;

// int main()
// {

    // Decalring an array

    int arrName[8];

    int arr[5] = {11,15,17,13,19};

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};

    string str[3] = {"Hello", "World", "!"};

//     cout  << arr[4];




//     // cout << "Second element of the str array :" << str[1] << endl;

//     for (int i = 0; i < 3; i++)
//     // {
//     //     cout << "Enter element for the array at index " << i << " :";
//     //     cin >> arr[i];
//     // }

//     // cout << "Elements of the array are: ";
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     cout << arr[i] << " ";
//     // }

//     return 0;
// }





/*
                    ----------------------------
                    INSERTION OPERATION IN ARRAY
                    -----------------------------

*/

// #include <iostream>
// using namespace std;

void insertAtEnd(int arr[], int &n, int value) {

    arr[n] = value;

    n++;

}

void insertAtBeginning(int arr[], int &n, int value) {
    
    for (int i = n; i > 0; i--) 

    arr[i] = arr[i - 1];

    arr[0] = value;

    n++;

}

void insertAtIndex(int arr[], int &n, int index, int value) {

    if (index < 0 || index > n) {

        cout << "Invalid index" << endl;
        return;
    }

    for (int i = n; i > index; i--)

    arr[i] = arr[i - 1];

    arr[index] = value;

    n++;

}

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) cout << arr[i] << " ";
//     cout << endl;
// }

// int main() {
//     int arr[100] = {10, 20, 30, 40};
//     int n = 4;

//     cout << "Original Array ";
//     printArray(arr, n);
    
//     insertAtEnd(arr, n, 50);
//     cout << "Array after insertions at End postion: ";
//     printArray(arr, n);
    
//     insertAtBeginning(arr, n, 5);
//    cout << "Array after insertions at first postion: ";
//     printArray(arr, n);
    

//     insertAtIndex(arr, n, 2, 99);

//     cout << "Array after insertions at index 2: ";
//     printArray(arr, n);

//     return 0;
// }






/*
                    ----------------------------
                    DELETION OPERATION IN ARRAY
                    -----------------------------

*/

#include <iostream>
using namespace std;

void deleteAtEnd(int &n) {
    if (n <= 0) {
        cout << "Array is already empty!" << endl;
        return;
    }
    n--;
}

void deleteAtBeginning(int arr[], int &n) {
    if (n <= 0) {
        cout << "Array is already empty!" << endl;
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void deleteAtIndex(int arr[], int &n, int index) {
    if (index < 0 || index >= n) {
        cout << "Invalid index!" << endl;
        return;
    }

    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;

    cout << "Array before  deletions: ";
    printArray(arr, n);

    deleteAtEnd(n);

       cout << "Array after deletions at end : ";
    printArray(arr, n);

    deleteAtBeginning(arr, n);
       cout << "Array after deletions at starting: ";
    printArray(arr, n);

    deleteAtIndex(arr, n, 1); // delete element at index 1
     

    cout << "Array after deletions: ";
    printArray(arr, n);

    return 0;
}

/*
                    ----------------------------
                    SEARCHING OPERATION IN ARRAY
                    -----------------------------

*/

// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int n, int key) {
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == key)
//             return i;  // Element found at index i
//     }
//     return -1;  // Element not found
// }

// int main() {
//     int arr[] = {5, 10, 15, 20, 25};
//     int n = 5;
//     int key = 20;

//     int result = linearSearch(arr, n, key);

//     if (result != -1)
//         cout << "Element found at index " << result << endl;
//     else
//         cout << "Element not found!" << endl;

//     return 0;
// }
