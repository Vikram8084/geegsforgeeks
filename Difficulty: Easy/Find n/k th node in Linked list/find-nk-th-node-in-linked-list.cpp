/*The structure of the node is
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    int fractional_node(struct Node *head, int k) {
        // your code here
        Node* curr=head;
        int length=0;
        while(curr !=NULL){
            length++;
            curr=curr->next;
        }
        Node*temp=head;
        int n=ceil((double)length / k);
        for(int i=1;i<n;i++){
            temp=temp->next;
        }
        return temp->data;
    }
};