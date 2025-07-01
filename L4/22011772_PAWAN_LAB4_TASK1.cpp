//PAWANDEEP SINGH A/L BALWINDER SINGH
//22011772

#include <iostream>
using namespace std;

class Node {
public:
    string name;
    Node* next_ptr;

    Node(string n) {
        name = n;
        next_ptr = nullptr;
    }
};

Node* head = nullptr;
Node* tail = nullptr;

void insert_node(string name) {
    Node* new_node = new Node(name);

    if (head == nullptr) {
        head = tail = new_node;
        tail->next_ptr = head;
    } else {
        tail->next_ptr = new_node;
        tail = new_node;
        tail->next_ptr = head;
    }
}

void diplay_list() {
    Node* current = head;

    do {
        cout << current->name << " -> ";
        current = current->next_ptr;
    } 
    while (current != head);

    cout << current->name << endl;
}

int main() {
    insert_node("Ali");
    insert_node("Alice");
    insert_node("Ahmed");

    cout << "Circular Linked List:\n";
    diplay_list();

    return 0;
}