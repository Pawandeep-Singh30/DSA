//PAWANDEEP SINGH A/L BALWINDER SINGH
//22011772

#include <iostream>
using namespace std;

class Node {
public:
    string name;
    Node* next_ptr;
    Node* prev_ptr;

    Node(string n) {
        name = n;
        next_ptr = nullptr;
        prev_ptr = nullptr;
    }
};

Node* head = nullptr;
Node* tail = nullptr;

void insert_node(string name) {
    Node* new_node = new Node(name);

    if (head == nullptr) {
        head = tail = new_node;
        head->next_ptr = head;
        head->prev_ptr = head;
    } else {
        tail->next_ptr = new_node;
        new_node->prev_ptr = tail;
        new_node->next_ptr = head;
        head->prev_ptr = new_node;
        tail = new_node;
    }
}

void display_list_forward() {
    Node* current = head;
    do {
        cout << current->name << " <-> ";
        current = current->next_ptr;
    } while (current != head);

    cout << head->name << endl;
}

void display_list_reverse() {
    Node* current = tail;
    do {
        cout << current->name << " <-> ";
        current = current->prev_ptr;
    } while (current != tail);

    cout << tail->name << endl;
}

int main() {
    insert_node("Ali");
    insert_node("Alice");
    insert_node("Ahmed");

    cout << "Doubly Circular Linked List (Forward):\n";
    display_list_forward();

    cout << "\nDoubly Circular Linked List (Reverse):\n";
    display_list_reverse();

    return 0;
}
