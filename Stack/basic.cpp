// #include <iostream>
// using namespace std;

// class Stack {
// private:
// int* arr; // Pointer to the array to hold stack elements
// int top; // Index of the top element
// int size; // Maximum size of the stack

// public:
// // Constructor: initializes the stack with given capacity
// Stack(int capacity) {
// size = capacity;
// arr = new int[size]; // Dynamic array allocation
// top = -1; // Initially, the stack is empty
// }



// // Push Operation: adds an element to the top of the stack
// void push(int val) {
//     if (top >= size - 1) {
//         cout << "Stack Overflow\n";
//         return;
//     }
//     top++;
//     arr[top] = val;
// }

// // Pop Operation: removes the top element
// void pop() {
//     if (top == -1) {
//         cout << "Stack Underflow\n";
//         return;
//     }
//     top--;
// }

// // Peek Operation: returns the top element without removing it
// int peek() {
//     if (top == -1) {
//         cout << "Stack is Empty\n";
//         return -1;
//     }
//     return arr[top];
// }

// // isEmpty: checks if the stack is empty
// bool isEmpty() {
//     return top == -1;
// }

// // Display all elements from top to bottom
// void display() {
//     if (top == -1) {
//         cout << "Stack is empty\n";
//         return;
//     }
//     cout << "Stack elements (top to bottom): ";
//     for (int i = top; i >= 0; i--) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// // Destructor: deallocates the dynamic memory
// ~Stack() {
//     delete[] arr;
// }
// };



// int main() {
// Stack s(5); // Create a stack of size 5


// s.push(10);
// s.push(20);
// s.push(30);

// s.display(); // Output: Stack elements (top to bottom): 30 20 10

// cout << "Top: " << s.peek() << endl; // Output: Top: 30

// s.pop();

// cout << "Top after pop: " << s.peek() << endl; // Output: Top after pop: 20

// s.display(); // Output: Stack elements (top to bottom): 20 10

// s.pop();
// s.pop();
// s.pop(); // Output: Stack Underflow

// return 0;
// }




// #include <iostream>
// using namespace std;

// // Define the structure for a node
// struct Node {
//     int data;
//     Node* next;
// };

// // Top pointer for the stack
// Node* top = nullptr;

// // Push operation
// void push(int val) {
//     Node* newNode = new Node;
//     newNode->data = val;
//     newNode->next = top;
//     top = newNode;
//     cout << val << " pushed to stack\n";
// }

// // Pop operation
// void pop() {
//     if (top == nullptr) {
//         cout << "Stack Underflow (empty stack)\n";
//         return;
//     }
//     Node* temp = top;
//     cout << top->data << " popped from stack\n";
//     top = top->next;
//     delete temp;
// }

// // Peek operation
// int peek() {
//     if (top == nullptr) {
//         cout << "Stack is Empty\n";
//         return -1;
//     }
//     return top->data;
// }

// // Check if stack is empty
// bool isEmpty() {
//     return top == nullptr;
// }

// // Display all elements in stack
// void display() {
//     if (top == nullptr) {
//         cout << "Stack is Empty\n";
//         return;
//     }
//     Node* temp = top;
//     cout << "Stack elements: ";
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// // Main function to test stack operations
// int main() {
//     push(10);
//     push(20);
//     push(30);

//     display();  // Output: 30 20 10

//     cout << "Top element is: " << peek() << endl;

//     pop();
//     cout << "Top element after pop: " << peek() << endl;

//     display();

//     return 0;
// }


// #include <iostream>
// #include <stack>
// using namespace std;

// void displayStack(stack<int> s) {
//     cout << "Stack elements (top to bottom): ";
//     while (!s.empty()) {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
// }

// int main() {
//     // Create a stack of integers
//     stack<int> s;

//     // Push elements
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     displayStack(s);

//     // Display top element
//     cout << "Top element: " << s.top() << endl;  // 30

//     // Pop an element
//     s.pop();

//     // Display top element after pop
//     cout << "Top after pop: " << s.top() << endl;  // 20

//     // Check if stack is empty
//     if (s.empty()) {
//         cout << "Stack is empty\n";
//     } else {
//         cout << "Stack is not empty\n";
//     }

//     // Display stack size
//     cout << "Stack size: " << s.size() << endl;

  



//     return 0;
// }

