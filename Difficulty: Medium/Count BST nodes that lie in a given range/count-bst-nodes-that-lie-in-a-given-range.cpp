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
    void inorderSolver(Node* root,vector<int>&inorder,int l,int h){
        if(root==NULL) return;
        inorderSolver(root->left,inorder,l,h);
        if(root->data >=l && root->data <=h){
            inorder.push_back(root->data);
        }
        inorderSolver(root->right,inorder,l,h);
    }
    int getCount(Node *root, int l, int h) {
        // your code here
        vector<int>inorder;
        inorderSolver(root,inorder,l,h);
        return inorder.size();
        
    }
};