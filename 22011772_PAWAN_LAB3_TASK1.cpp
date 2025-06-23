//PAWANDEEP SINGH A/L BALWINDER SINGH
//22011772

#include <iostream>
using namespace std;

class Node {
public:
    string name;
    Node* nextPointer;
    
    Node (string name){
        this->name = name; //this = Node   Node.name = name would work too
        this->nextPointer = nullptr;
        
    }
};
    
class Linkedlist {
private:
    Node* head;
    Node* tail;

public: 
    Linkedlist() {
        head = nullptr;
        tail = nullptr;
    }
    void insert_node(Node* node){
        if (head == nullptr) {
            head = node;
            tail = node;
        } else {
            tail->nextPointer = node;
            tail = node;
        }
        
    }
        
    void delete_node(Node* target){
        if (head == nullptr) return;

        if (head == target) {
            Node* temp = head;
            head = head->nextPointer;
            delete temp;
            return;
        }

        Node* curr = head;
        while (curr->nextPointer != nullptr && curr->nextPointer != target) {
            curr = curr->nextPointer;
        }

        if (curr->nextPointer == target) {
            Node* temp = curr->nextPointer;
            curr->nextPointer = temp->nextPointer;
            if (tail == temp) tail = curr;
            delete temp;
        }
    }


    
    void display_list(){
         /*cout << head.name; //Ali
        head = head.next_pointer; //node2
        
        cout<< head.name; //Alice
        head = head.next_pointer; //node3 */

        Node* currNode = head;
        
        while (currNode != nullptr){
            cout<< currNode->name<<"->";
            currNode = currNode->nextPointer;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    /*
    node1.name = "Ali";
    node1.next_pointer = nullptr;
    
    node2.name = "Alice";
    node2.next_pointer = nullptr;
    
    node3.name = "Ahmed";
    node3.next_pointer = nullptr;
    */
    
    Node* node1 = new Node ("Ali");
    Node* node2 = new Node ("Alice");
    Node* node3 = new Node ("Ahmed");
    
    Linkedlist std_names;
    
    std_names.insert_node(node1);
    std_names.insert_node(node2);
    std_names.insert_node(node3);
    
    cout<<"Before deletion: "<<endl;
    std_names.display_list();
    
    std_names.delete_node(node2);
    
    cout<<"\nAfter deletion: "<<endl;
    std_names.display_list();

    return 0;
}