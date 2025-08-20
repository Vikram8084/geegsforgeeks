/*The structure of Node

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

class Solution {
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    void inorderSolver(Node* root, vector<int>& inorder){
        if(root==NULL) return;
        inorderSolver(root->left,inorder);
        inorder.push_back(root->data);
        inorderSolver(root->right,inorder);
    }
    int inOrderSuccessor(Node *root, Node *x) {
        // Your code here
        vector<int> inorder;
        inorderSolver(root,inorder);
        for(int i=0;i<inorder.size()-1;i++){
            if(inorder[i]==x->data){
                return inorder[i+1];
            }
        }
        return -1;
        
    }
};