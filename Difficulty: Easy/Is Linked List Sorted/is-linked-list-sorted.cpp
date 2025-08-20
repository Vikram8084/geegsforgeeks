/*
class Node
{
  public:
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/

class Solution {
  public:
    bool isSorted(Node* head) {
        // code here
        if(head==NULL || head->next==NULL) return true;
        bool nonDecreasing = true;
        bool nonIncreasing = true;
        
        Node* curr = head;
        while (curr->next != NULL) {
            if (curr->data > curr->next->data) {
                nonDecreasing = false;
            }
            if (curr->data < curr->next->data) {
                nonIncreasing = false;
            }
            curr = curr->next;
        }
        
        return nonDecreasing || nonIncreasing;
    }
};