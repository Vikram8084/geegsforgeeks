/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/

// class Solution {
//   public:
//     int maxDiameter = 0;

//     int height(Node* root) {
//         if (root == NULL) return 0;

//         int lh = height(root->left);
//         int rh = height(root->right);

//         maxDiameter = max(maxDiameter, lh + rh + 1);

//         return max(lh, rh) +1; 
//     }

//     int diameter(Node* root) {
//         height(root);
//         return maxDiameter;
//     }
// };
class Solution {
  public:
    int maxDiameter = 0;

    int height(Node* root) {
        if (root == NULL) return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        // Update diameter in terms of edges, not nodes
        maxDiameter = max(maxDiameter, lh + rh);

        return max(lh, rh) + 1;
    }

    int diameter(Node* root) {
        height(root);
        return maxDiameter;
    }
};
