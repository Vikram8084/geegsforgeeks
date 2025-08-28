/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // code here
        vector<vector<int>> result;
        if (!root) return result; 
        
        queue<Node*> q;
        q.push(root);
        
        while (!q.empty()) {
            int Size = q.size(); 
            vector<int> ans;
            
            for (int i = 0; i < Size; i++) {
                Node* node = q.front();
                q.pop();
                ans.push_back(node->data);
                
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            
            result.push_back(ans);
        }
        
        return result;
        
    }
};