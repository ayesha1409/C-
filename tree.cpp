#include <iostream>
#include <algorithm>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

// Function to build the tree recursively
Node* buildTree(int data) {
    if (data == -1) return NULL; // -1 indicates no node

    Node* root = new Node(data);

    cout << "Enter the left child of " << data << ": ";
    int leftData;
    cin >> leftData;
    root->left = buildTree(leftData);

    cout << "Enter the right child of " << data << ": ";
    int rightData;
    cin >> rightData;
    root->right = buildTree(rightData);

    return root;
}

// Function to calculate height of the tree
int findHeight(Node* root) {
    if (root == NULL) return 0;

    int lHeight = findHeight(root->left);
    int rHeight = findHeight(root->right);

    return max(lHeight, rHeight) + 1;
}

// Main function
int main() {
    Node* root;
    int data;

    cout << "Enter the root node value: ";
    cin >> data;

    root = buildTree(data);

    cout << "Height of the tree: " << findHeight(root) << endl;

    return 0;
}


  
