/*
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
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    void inorderSolver(Node* root,vector<int>& inorder){
        if(root ==NULL) return;
        inorderSolver(root->left,inorder);
        inorder.push_back(root->data);
        inorderSolver(root->right,inorder);
    }
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        vector<int>inorder1;
        vector<int>inorder2;
        inorderSolver(root1,inorder1);
        inorderSolver(root2,inorder2);
        vector<int> result;
        int i = 0, j = 0;
        
        while (i < inorder1.size() && j < inorder2.size()) {
            if (inorder1[i] <= inorder2[j]) {
                result.push_back(inorder1[i]);
                i++;
            } else {
                result.push_back(inorder2[j]);
                j++;
            }
        }
        
        while (i < inorder1.size()) {
            result.push_back(inorder1[i]);
            i++;
        }
        while (j < inorder2.size()) {
            result.push_back(inorder2[j]);
            j++;
        }
        
        return result;
    }
};