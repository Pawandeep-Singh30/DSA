//PAWANDEEP SINGH A/L BALWINDER SINGH
//22011772

#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int v) {
        value = v;
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

    void add_root(int value) {
        root = new Node(value);
    }

    void add_left(Node* parent, int value) {
        parent->left = new Node(value);
    }

    void add_right(Node* parent, int value) {
        parent->right = new Node(value);
    }

    void inorder(Node* node) {
        if (node != nullptr) {
            inorder(node->left);
            cout << node->value << " ";
            inorder(node->right);
        }
    }

    Node* search(Node* node, int target) {
        if (node == nullptr) {
            cout << "Reached a null node. " << target << " not found.\n";
            return nullptr;
        }

        cout << "Currently at node " << node->value << ". ";

        if (node->value == target) {
            cout << "Found " << target << "!\n";
            return node;
        }
        if (target < node->value) {
            cout << target << " is smaller than " << node->value << ". Going left.\n";
            return search(node->left, target);
        } else {
            cout << target << " is greater than " << node->value << ". Going right.\n";
            return search(node->right, target);
        }
    }
};

int main() {
    Tree tree;

    tree.add_root(4);
    tree.add_left(tree.root, 2);
    tree.add_right(tree.root, 7);
    tree.add_left(tree.root->left, 1);
    tree.add_right(tree.root->left, 3);
    tree.add_left(tree.root->right, 5);
    tree.add_right(tree.root->right, 10);

    cout << "In-order traversal of tree (sorted values): ";
    tree.inorder(tree.root);
    cout << endl;

    int target;
    cout << "\nEnter a number to search: ";
    cin >> target;

    Node* result = tree.search(tree.root, target);
    if (result != nullptr) {
        cout << target << " was found in the tree.\n";
    } else {
        cout << target << " was not found in the tree.\n";
    }

    return 0;
}