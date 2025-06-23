/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    bool areIdentical(struct Node *head1, struct Node *head2) {
        Node* temp1 = head1;
        Node* temp2 = head2;
        while (temp1 != NULL && temp2 != NULL) {
            if (temp1->data != temp2->data) {
                return false;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return (temp1 == NULL && temp2 == NULL);
    }
};