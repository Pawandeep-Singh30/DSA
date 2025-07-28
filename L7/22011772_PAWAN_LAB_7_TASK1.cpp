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

    void add_left(Node* parent, string name) {
        parent->left = new Node(name);
    }

    void add_right(Node* parent, string name) {
        parent->right = new Node(name);
    }
};

int main() {
    Tree tree;

    tree.add_root("A");
    tree.add_left(tree.root, "B");
    tree.add_right(tree.root, "C");
    tree.add_left(tree.root->left, "D");
    tree.add_right(tree.root->left, "E");
    tree.add_left(tree.root->right, "F");
    tree.add_right(tree.root->right, "G");
    
    tree.add_left(tree.root->left->left, "H");
    tree.add_right(tree.root->left->left, "I");
    tree.add_left(tree.root->left->right, "J");
    tree.add_right(tree.root->left->right, "K");
    
    tree.add_left(tree.root->right->left, "L");
    tree.add_right(tree.root->right->left, "M");
    tree.add_left(tree.root->right->right, "N");
    tree.add_right(tree.root->right->right, "O");

    cout << "Root: " << tree.root->name << endl;
    cout << "Left child of root: " << tree.root->left->name << endl;
    cout << "Right child of root: " << tree.root->right->name << endl;
    cout << "Left child of B: " << tree.root->left->left->name << endl;
    cout << "Right child of B: " << tree.root->left->right->name << endl;
    cout << "Left child of C: " << tree.root->right->left->name << endl;
    cout << "Right child of C: " << tree.root->right->right->name << endl;
    
    cout << "Left child of D: " << tree.root->left->left->left->name << endl;
    cout << "Right child of D: " << tree.root->left->left->right->name << endl;
    cout << "Left child of E: " << tree.root->left->right->left->name << endl;
    cout << "Right child of E: " << tree.root->left->right->right->name << endl;
    
    cout << "Left child of F: " << tree.root->right->left->left->name << endl;
    cout << "Right child of F: " << tree.root->right->left->right->name << endl;
    cout << "Left child of G: " << tree.root->right->right->left->name << endl;
    cout << "Right child of G: " << tree.root->right->right->right->name << endl;

    return 0;
}