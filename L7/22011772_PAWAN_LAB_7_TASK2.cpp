//PAWANDEEP SINGH A/L BALWINDER SINGH
//22011772

#include <iostream>
using namespace std;

class Node {
public:
    string name;
    Node* left;
    Node* right;

    Node(string n) {
        name = n;
        left = nullptr;
        right = nullptr;
    }
};

class Tree {
public:
    Node* root;

    Tree() {
        root = nullptr;
    }

    void add_root(string name) {
        root = new Node(name);
    }

    Node* find(Node* current, string name) {
        if (current == nullptr) return nullptr;
        if (current->name == name) return current;

        Node* found = find(current->left, name);
        if (found) return found;

        return find(current->right, name);
    }

    void add_left(string parent_name, string child_name) {
        Node* parent = find(root, parent_name);
        if (parent) {
            parent->left = new Node(child_name);
        }
    }

    void add_right(string parent_name, string child_name) {
        Node* parent = find(root, parent_name);
        if (parent) {
            parent->right = new Node(child_name);
        }
    }

    void print_child(string parent_name) {
        Node* parent = find(root, parent_name);
        if (parent) {
            cout << "Children of " << parent_name << ": ";
            if (parent->left) cout << "Left = " << parent->left->name << ", ";
            else cout << "Left = NULL, ";
            if (parent->right) cout << "Right = " << parent->right->name << endl;
            else cout << "Right = NULL" << endl;
        } else {
            cout << parent_name << " not found." << endl;
        }
    }
};

int main() {
    Tree tree;

    tree.add_root("A");
    tree.add_left("A", "B");
    tree.add_right("A", "C");
    tree.add_left("B", "D");
    tree.add_right("B", "E");
    tree.add_left("C", "F");
    tree.add_right("C", "G");

    tree.add_left("D", "H");
    tree.add_right("D", "I");
    tree.add_left("E", "J");
    tree.add_right("E", "K");

    tree.add_left("F", "L");
    tree.add_right("F", "M");
    tree.add_left("G", "N");
    tree.add_right("G", "O");

    tree.print_child("A");
    tree.print_child("B");
    tree.print_child("C");
    tree.print_child("D");
    tree.print_child("E");
    tree.print_child("F");
    tree.print_child("G");

    return 0;
}
