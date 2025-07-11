//PAWANDEEP SINGH A/L BALWINDER SINGH
//22011772

#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string name;
    Node* next_ptr;

    Node(string name) {
        this->name = name;
        this->next_ptr = nullptr;
    }
};

class Stack {
public:
    Node* top;

    Stack() {
        top = nullptr;
    }

    void push(string name) {
        Node* new_node = new Node(name);

        if (top == nullptr) {
            top = new_node;
        } else {
            new_node -> next_ptr = top;
            top = new_node;
        }
    }
    
    
    void isEmpty() {
        cout << "Stack is empty!" << endl;
        return;
    }
    
     void isFull() {
        cout << "Stack is not full!" << endl;
        return;
    }
    
    void pop() {
        if (top == nullptr){
            isEmpty();
        }else{
            top = top->next_ptr;
        }
        
    }
    
    void peek() {
        if (top == nullptr) {
            isEmpty();
        } else {
            cout << "Top element when peek: " << top->name << endl;
        }
    }


    void display_stack() {
        Node* current = top;
        while (current != nullptr) {
            cout << current->name << " -> ";
            current = current->next_ptr;
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