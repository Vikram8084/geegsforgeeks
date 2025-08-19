/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        unordered_set<Node*> seen;
        Node* curr = head1;
        while (curr) {
            seen.insert(curr);
            curr = curr->next;
        }
        
        curr = head2;
        while (curr) {
            if (seen.find(curr) != seen.end()) {
                return curr; 
            }
            curr = curr->next;
        }
        
        return NULL;
        
    }
};