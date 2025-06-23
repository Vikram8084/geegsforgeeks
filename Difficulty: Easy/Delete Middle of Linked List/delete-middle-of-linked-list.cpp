/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
class Solution {
  public:
    Node* deleteMid(Node* head) {
        // Your Code Here
        if(head==NULL || head->next==NULL) return NULL;
        Node*temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int n=count/2;
       // Node*prev=NULL;
        Node*curr=head;
        for(int i=1;i<n;i++){
            curr=curr->next;
        }
        curr->next=curr->next->next;
        return head;
    }
};