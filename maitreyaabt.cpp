#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* left;
    Node* right;


    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

Node* createNode(int value) {
    return new Node(value);
}


int main() {

    Node* root = createNode(1);

    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);


    cout << "Root: " << root->data << endl;
    cout << "Left child of root: " << root->left->data << endl;
    cout << "Right child of root: " <<root->right->data<< endl;

    return 0;
}
