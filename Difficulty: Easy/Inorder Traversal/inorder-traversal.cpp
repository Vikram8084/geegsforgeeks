/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void inorderSolver(Node* root,vector<int>& inorder){
        if(root==NULL) return;
        inorderSolver(root->left,inorder);
        inorder.push_back(root->data);
        inorderSolver(root->right,inorder);
    }
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int>inorder;
        inorderSolver(root,inorder);
        return inorder;
        
    }
};