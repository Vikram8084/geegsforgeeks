/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    // function should print the nodes at k distance from root
    vector<int> Kdistance(Node *root, int k) {
        vector<int> ans;
        kdist(root, k, ans); 
        return ans;
    }
    
    void kdist(Node *root, int k, vector<int> &ans) {
        if (root == NULL) return;

        if (k == 0) {
            ans.push_back(root->data);
        } else {
            kdist(root->left, k - 1, ans);
            kdist(root->right, k - 1, ans);
        }
    }
};
