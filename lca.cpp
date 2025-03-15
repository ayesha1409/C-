#include <iostream>
using namespace std;

// Definition of a Tree Node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = right = nullptr;
    }
};

// Function to find LCA of two given nodes p and q
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    // Base case: if root is null or root is one of the nodes (p or q)
    if (root == nullptr || root == p || root == q) {
        return root;
    }

    // Recursively find LCA in left and right subtrees
    TreeNode* left = lowestCommonAncestor(root->left, p, q);
    TreeNode* right = lowestCommonAncestor(root->right, p, q);

    // If both left and right are non-null, root is the LCA
    if (left != nullptr && right != nullptr) {
        return root;
    }

    // Otherwise, return the non-null value (either left or right)
    return (left != nullptr) ? left : right;
}

// Main function to test the LCA function
int main() {
    /*
        Example Tree:
              3
             / \
            5   1
           / \  / \
          6   2 0  8
             / \
            7   4
    */
    
    // Creating the tree
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    // Finding LCA of 5 and 1
    TreeNode* lca = lowestCommonAncestor(root, root->left, root->right);
    cout << "LCA of 5 and 1: " << lca->val << endl; // Output: 3

    // Finding LCA of 5 and 4
    lca = lowestCommonAncestor(root, root->left, root->left->right->right);
    cout << "LCA of 5 and 4: " << lca->val << endl; // Output: 5

    return 0;
}
