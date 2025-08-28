class Solution {
public:
    void inorderSolver(Node* root, vector<int>& inorder) {
        if (root == NULL) return;
        inorderSolver(root->left, inorder);
        inorder.push_back(root->data);
        inorderSolver(root->right, inorder);
    }

    int ceilHelper(vector<int>& inorder, int x) {
        int start = 0;
        int end = inorder.size() - 1;
        int ceil = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (inorder[mid] == x) {
                return inorder[mid]; 
            } 
            else if (inorder[mid] < x) {
                start = mid + 1; 
            } 
            else {
                ceil = inorder[mid]; 
                end = mid - 1; 
            }
        }

        return ceil;
    }

    int findCeil(Node* root, int x) {
        vector<int> inorder;
        inorderSolver(root, inorder);
        return ceilHelper(inorder, x);
    }
};

