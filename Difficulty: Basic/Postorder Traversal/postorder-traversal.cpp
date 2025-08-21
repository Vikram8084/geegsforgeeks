/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
class Solution {
  public:
    // Function to return a list containing the postorder traversal of the tree.
    void postorderSolver(Node* root,vector<int>& postorder){
        if(root ==NULL) return;
        postorderSolver(root->left,postorder);
        postorderSolver(root->right,postorder);
        postorder.push_back(root->data);
    }
    vector<int> postOrder(Node* root) {
        // Your code here
        vector<int>postorder;
        postorderSolver(root,postorder);
        return postorder;
        
    }
};