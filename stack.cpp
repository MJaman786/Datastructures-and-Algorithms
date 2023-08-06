#include<iostream>
using namespace std;

class stack {

    int top;
    int *arr;
    int size;

public:
    stack(int size) {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int item) {
        if (top < size - 1) {
            top++;
            arr[top] = item;
        }
        else {
            cout << "Stack Overflow" << endl;
        }
    }

    int pop() {
        if (top > -1) {
            top--;
            return arr[top + 1];
        }
        else {
            cout << "Stack Empty" << endl;
            return -1; // Return a default value to handle the empty stack case.
        }
    }

    int peek() {
        if (top > -1) {
            return arr[top];
        }
        else {
            cout << "Stack is Empty" << endl;
            return -1; // Return a default value to handle the empty stack case.
        }
    }

    void print() {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int ch = 0, iteam, size;
    cout << "Enter Size of Stack = ";
    cin >> size;
    stack s(size);

    while (ch != 5) {
        cout << "\nStack Implementation\n";
        cout << "1.push\n";
        cout << "2.pop\n";
        cout << "3.peek\n";
        cout << "4.print\n";
        cout << "5.Exit\n";
        cout << "Enter your choice : ";
        cin >> ch;

        switch (ch) {
        case 1:
            cout << "Enter item = ";
            cin >> iteam;
            s.push(iteam);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            cout << "Top element: " << s.peek() << endl;
            break;
        case 4:
            s.print();
            break;
        default:
            break;
        }
    }

    return 0;
}
