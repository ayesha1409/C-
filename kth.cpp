#include <iostream>
using namespace std;

// Structure of a Tree Node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = right = nullptr;
    }
};

// Recursive function to find the Kth Ancestor
TreeNode* findKthAncestor(TreeNode* root, int node, int &k) {
    if (root == nullptr) {
        return nullptr;
    }

    // If the current node is the target node
    if (root->val == node) {
        return root;
    }

    // Recursively search in left and right subtrees
    TreeNode* left = findKthAncestor(root->left, node, k);
    TreeNode* right = findKthAncestor(root->right, node, k);

    // If the node is found in either left or right subtree
    if (left || right) {
        k--; // Reduce K at each ancestor level

        // If K becomes 0, we have found the K-th ancestor
        if (k == 0) {
            cout << "Kth Ancestor: " << root->val << endl;
            return nullptr; // Stop further recursion
        }

        return left ? left : right;
    }

    return nullptr;
}

// Wrapper function to call the recursive function
void kthAncestor(TreeNode* root, int node, int k) {
    findKthAncestor(root, node, k);

    // If K is still greater than 0, ancestor doesn't exist
    if (k > 0) {
        cout << "Kth Ancestor not found!" << endl;
    }
}

// Main function
int main() {
    // Constructing the Binary Tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    // Example Test Case
    int node = 4, k = 2;
    kthAncestor(root, node, k);

    return 0;
}
