class Solution {
  public:
    void inorder(Node* root, vector<int>& values) {
        if (!root) return;
        inorder(root->left, values);
        values.push_back(root->data);
        inorder(root->right, values);
    }

    bool isBST(Node* root) {
        vector<int> values;
        inorder(root, values);

        for (int i = 1; i < values.size(); i++) {
            if (values[i] <= values[i - 1]) {
                return false;
            }
        }
        return true;
    }
};
