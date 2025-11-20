#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    Node(int val) : key(val), left(NULL), right(NULL) {}
};


Node* insert(Node* root, int key) {
    if (root == NULL)
        return new Node(key);

    if (key < root->key)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);

    return root;
}


Node* findMin(Node* root) {
    if (root == NULL) return NULL;

    while (root->left != NULL)
        root = root->left;

    return root;
}


Node* findMax(Node* root) {
    if (root == NULL) return NULL;

    while (root->right != NULL)
        root = root->right;

    return root;
}

Node* inorderSuccessor(Node* root, int key) {
    Node* successor = NULL;

    while (root != NULL) {
        if (key < root->key) {
            successor = root;
            root = root->left;
        }
        else
            root = root->right;
    }

    return successor;
}

Node* inorderPredecessor(Node* root, int key) {
    Node* predecessor = NULL;

    while (root != NULL) {
        if (key > root->key) {
            predecessor = root;
            root = root->right;
        }
        else
            root = root->left;
    }

    return predecessor;
}


int main() {
    Node* root = NULL;

    int arr[] = {20, 8, 22, 4, 12, 10, 14};
    for (int x : arr)
        root = insert(root, x);

    // Min
    Node* mn = findMin(root);
    cout << "Minimum: " << mn->key << endl;

    // Max
    Node* mx = findMax(root);
    cout << "Maximum: " << mx->key << endl;

    int key = 10;

    Node* succ = inorderSuccessor(root, key);
    if (succ) cout << "Successor of " << key << " is: " << succ->key << endl;
    else cout << "No Successor\n";

    Node* pred = inorderPredecessor(root, key);
    if (pred) cout << "Predecessor of " << key << " is: " << pred->key << endl;
    else cout << "No Predecessor\n";

    return 0;
}

