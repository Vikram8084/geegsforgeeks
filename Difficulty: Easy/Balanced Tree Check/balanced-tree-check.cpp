/*

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
    int checkHeight(Node* root) {
        if (!root) return 0; 
        int left = checkHeight(root->left);
        if (left == -1) return -1;
        
        int right = checkHeight(root->right);
        if (right == -1) return -1;
        
        if (abs(left - right) > 1) return -1;

        return max(left, right) + 1; 
    }

    bool isBalanced(Node* root) {
        return checkHeight(root) != -1;
    }
};
