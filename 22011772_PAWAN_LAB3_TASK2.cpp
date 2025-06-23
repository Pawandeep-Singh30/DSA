//PAWANDEEP SINGH A/L BALWINDER SINGH
//22011772

#include <iostream>
using namespace std;

class Node {
public:
    string name;
    Node* nextPointer;
    Node* previousNode;
    
    Node (string name){
        this->name = name; 
        this->nextPointer = nullptr;
        this->previousNode = nullptr;
        
    }
};
    
class DoublyLinkedlist {
private:
    Node* head;
    Node* tail;

public: 
    DoublyLinkedlist() {
        head = nullptr;
        tail = nullptr;
    }
    
    void insert_node(Node* node){
        if (head == nullptr) {
            head = node;
            tail = node;
        } else {
            tail->nextPointer = node;
            node->previousNode = tail;
            tail = node;
        }
        
    }
        
    void delete_node(Node* target){
        if (head == nullptr|| target == nullptr ) return;

        if (target == head) {
            head == head-> nextPointer;
            if (head != nullptr){
                head -> previousNode = nullptr;
            }
            else {
                tail = nullptr;
            }
            delete target;
            return;
        }
        
        if (target == tail) {
            tail = tail-> previousNode;
            tail-> nextPointer = nullptr;
            delete target;
            return;
        }
        
        Node* before = target -> previousNode;
        Node* after = target -> nextPointer;
        
        if (before != nullptr) before->nextPointer = after;
        if (after != nullptr) after->previousNode = before;

        delete target;
    }
    
    void display_forward(){
        
        Node* currNode = head;
        cout<<"Forward: ";
        while (currNode != nullptr){
            cout<< currNode->name<<"<->";
            currNode = currNode->nextPointer;
        }
        cout << "NULL" << endl;
    }
    
    void display_backward() {
        Node* currNode = tail;
        cout << "Backward: ";
        while (currNode != nullptr) {
            cout << currNode->name << " <-> ";
            currNode = currNode->previousNode;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    
    Node* node1 = new Node ("Ali");
    Node* node2 = new Node ("Alice");
    Node* node3 = new Node ("Ahmed");
    
    DoublyLinkedlist std_names;
    
    std_names.insert_node(node1);
    std_names.insert_node(node2);
    std_names.insert_node(node3);
    
    cout<<"Before deletion: "<<endl;
    std_names.display_forward();
    std_names.display_backward();
    
    std_names.delete_node(node2);
    
    cout<<"\nAfter deletion: "<<endl;
    std_names.display_forward();
    std_names.display_backward();

    return 0;
}