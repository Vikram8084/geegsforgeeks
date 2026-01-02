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
        if(head ==NULL || head->next==NULL) return NULL;
        Node* slow=head;
        Node* fast=head->next->next;
       
        while(fast !=NULL && fast->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
        }
        Node* temp = slow->next;
        slow->next = temp->next;
        delete temp;

        return head;
    }
};