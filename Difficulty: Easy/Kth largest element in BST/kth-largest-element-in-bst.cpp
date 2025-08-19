/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution {
  public:
    
    void inorderSolver(Node* root,vector<int>& inorder){
        if(root ==NULL) return;
        inorderSolver(root->left,inorder);
        inorder.push_back(root->data);
        inorderSolver(root->right,inorder);
    }
    int kthLargest(Node *root, int k) {
        // Your code here
        vector<int>inorder;
        inorderSolver(root,inorder);
        int n=inorder.size();
        return inorder[n-k];
        
    }
};