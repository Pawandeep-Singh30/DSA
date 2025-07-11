//PAWANDEEP SINGH A/L BALWINDER SINGH
//22011772

#include <iostream>
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

class Queue {
public:
    Node* front;
    Node* rear;
    
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(string name) {
        Node* new_node = new Node(name);

        if (front == nullptr) {
            front = new_node;
            rear = new_node;
            rear->next_ptr = front; 
        } else {
            rear->next_ptr = new_node;
            rear = new_node;
            rear->next_ptr = front; 
        }
    }
  
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is Empty.\n";
            return;
        }

        Node* temp = front;
        if (front == rear) {
            front = nullptr;
            rear = nullptr;
        } else {
            front = front->next_ptr;
            rear->next_ptr = front;
        }
        cout << temp->name << endl;
        delete temp;
    }

    void display_queue() {
        if (front == nullptr) {
            cout << "Queue is Empty.\n";
            return;
        }

        Node* current = front;
        while (true) {
            cout << current->name << " -> ";
            current = current->next_ptr;
            if (current == front) {
                cout << current->name << endl;
                break;
            }
        }
    }
};

int main() {
    Queue queue;

    queue.enqueue("Ali");
    queue.enqueue("Alice");
    queue.enqueue("Ahmed");
    queue.enqueue("Hamza");
    queue.enqueue("Sara");

    cout << "Queue:\n";
    queue.display_queue();

    queue.dequeue();

    return 0;
}
