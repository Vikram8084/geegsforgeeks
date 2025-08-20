// Function to return a list containing the inorder traversal of the BST.
void inorderSolver(Node *root,vector<int>&inorder){
    if(root==NULL) return;
    inorderSolver(root->left,inorder);
    inorder.push_back(root->data);
    inorderSolver(root->right,inorder);
}
vector<int> inOrder(Node *root) {
    // code here
    vector<int>inorder;
    inorderSolver(root,inorder);
    return inorder;
    
    
}