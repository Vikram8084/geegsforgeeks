// User function Template for C++

class Solution {
  public:
    Node *moveToFront(Node *head) {
        // code here
        Node* prev=NULL;
        Node* curr=head;
        while(curr->next !=NULL){
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        curr->next=head;
        head=curr;
        
        return head;
        
    }
};