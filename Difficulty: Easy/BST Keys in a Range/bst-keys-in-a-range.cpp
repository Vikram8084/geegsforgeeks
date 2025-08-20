class Solution {
  public:
    void inorderSolver(Node* root,int low,int high,vector<int>& inorder){
        if(root==NULL) return;
        inorderSolver(root->left,low,high,inorder);
        if(root->data >= low && root->data<= high){
            inorder.push_back(root->data);
        }
        inorderSolver(root->right,low,high,inorder);
    }
    vector<int> printNearNodes(Node *root, int low, int high) {
        // code here
        vector<int>inorder;
        inorderSolver(root,low,high,inorder);
        return inorder;
        
    }
};