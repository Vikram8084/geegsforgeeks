// Function to return the level order traversal of a BST.
vector<int> levelOrder(struct Node* node) {
    // code here
    vector<int> ans;
    if (node == NULL) return ans;

    queue<Node*> q;
    q.push(node);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        ans.push_back(curr->data);

        if (curr->left != NULL) q.push(curr->left);
        if (curr->right != NULL) q.push(curr->right);
    }

    return ans;
}