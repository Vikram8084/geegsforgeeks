// Function to search a node in BST.
class Solution {

  public:
    int floor(Node* root, int x) {
        // Code here
        int floor = -1;
        Node* curr = root;

        while (curr) {
            if (curr->data == x) {
                return curr->data; 
            }
            else if (curr->data > x) {
                curr = curr->left;
            }
            else {
                floor = curr->data; 
                curr = curr->right; 
            }
        }

        return floor; 
    }
};