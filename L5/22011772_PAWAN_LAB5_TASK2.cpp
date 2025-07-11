//PAWANDEEP SINGH A/L BALWINDER SINGH
//22011772

#include <iostream>
#include <string>
using namespace std;

const int MAX = 100; 

class Stack {
private:
    string arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(string name) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow! " << endl;
            return;
        }
        arr[++top] = name;
    }

    void pop() {
        if (top == -1) {
            isEmpty();
            return;
        }
        top--;
    }

    void peek() {
        if (top == -1) {
            isEmpty();
        } else {
            cout << "Top element when peek: " << arr[top] << endl;
        }
    }

    void isEmpty() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Stack is not empty!" << endl;
        }
    }

    void isFull() {
        if (top == MAX - 1) {
            cout << "Stack is full!" << endl;
        } else {
            cout << "Stack is not full!" << endl;
        }
    }

    void display_stack() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return;
        }
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " -> ";
        }
        cout << "NULL" << endl;
    }
};

int main() {
    Stack stack;

    stack.push("Ali");
    stack.push("Ahmed");
    stack.push("Alice");

    cout << "Stack: ";
    stack.display_stack();

    stack.pop();

    cout << "Stack after popping: ";
    stack.display_stack();

    stack.peek();
    stack.isFull();

    return 0;
}
