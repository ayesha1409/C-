#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

int convertToSumTree(Node* root) {
    if (root == NULL)
        return 0;

    
    int leftSum = convertToSumTree(root->left);
    int rightSum = convertToSumTree(root->right);

    
    int oldValue = root->data;

    
    root->data = leftSum + rightSum;

    
    return oldValue + root->data;
}


void inorder(Node* root) {
    if (root == NULL)
        return;
    
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    cout << "Inorder Traversal Before Conversion: ";
    inorder(root);
    cout << endl;

    convertToSumTree(root);

    cout << "Inorder Traversal After Conversion to Sum Tree: ";
    inorder(root);
    cout << endl;

    return 0;
}
