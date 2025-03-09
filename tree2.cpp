#include <iostream>
using namespace std;

// TreeNode Structure
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        val = value;
        left = right = nullptr;
    }
};

// Preorder Traversal (Root → Left → Right)
void preorder(TreeNode* root) {
    if (root) {
        cout << root->val << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Inorder Traversal (Left → Root → Right)
void inorder(TreeNode* root) {
    if (root) {
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}

// Postorder Traversal (Left → Right → Root)
void postorder(TreeNode* root) {
    if (root) {
        postorder(root->left);
        postorder(root->right);
        cout << root->val << " ";
    }
}

// Function to calculate the height of the tree
int findHeight(TreeNode* root) {
    if (root == nullptr) return 0;
    return 1 + max(findHeight(root->left), findHeight(root->right));
}

// Function to compute the diameter of a binary tree
int diameter(TreeNode* root) {
    if (root == nullptr) return 0;

    int leftDiameter = diameter(root->left);
    int rightDiameter = diameter(root->right);

    int lh = findHeight(root->left);
    int rh = findHeight(root->right);

    // Maximum of:
    // 1. Diameter of left subtree
    // 2. Diameter of right subtree
    // 3. Longest path through the root (lh + rh + 1)
    return max(leftDiameter, max(rightDiameter, lh + rh + 1));

}

// Main function
int main() {
    // Sample Binary Tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    // Print Tree Traversals
    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    // Print Tree Diameter
    cout << "Diameter of the Tree: " << diameter(root) << endl;

    return 0;
}
