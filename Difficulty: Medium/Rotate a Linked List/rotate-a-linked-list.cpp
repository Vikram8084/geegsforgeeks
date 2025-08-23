/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // Your code here
        if (!head || k == 0) return head;
        
        Node* temp = head;
        int length = 1;
        while (temp->next) {
            temp = temp->next;
            length++;
        }
        
        k = k % length;
        if (k == 0) return head;
    
        Node* curr = head;
        for (int i = 1; i < k && curr; i++) {
            curr = curr->next;
        }
        
        Node* newHead = curr->next;
        curr->next = NULL;
        
        temp->next = head;
        
        return newHead;
        
    }
};