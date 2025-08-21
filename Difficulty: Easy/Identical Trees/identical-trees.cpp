/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    void inorderSolver(Node* root,vector<int>& inorder){
        if(root==NULL) return;
        inorderSolver(root->left,inorder);
        inorder.push_back(root->data);
        inorderSolver(root->right,inorder);
    }
    bool isIdentical(Node* root1, Node* root2) {
        // code here
        vector<int>inorder1;
        vector<int>inorder2;
        inorderSolver(root1,inorder1);
        inorderSolver(root2,inorder2);
        
        return inorder1 ==inorder2;
        
    }
};