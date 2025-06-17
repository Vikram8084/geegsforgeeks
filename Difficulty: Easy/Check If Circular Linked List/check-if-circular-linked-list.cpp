/* Link list Node
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

/* Should return true if linked list is circular, else false */
class Solution {
public:
    bool isCircular(Node* head) {
        if (head == NULL)
            return true; // Empty list is considered circular

        Node* temp = head->next;

        // If there is only one node, check if it points to itself
        if (temp == head)
            return true;

        while (temp != NULL && temp != head) {
            temp = temp->next;
        }

        return (temp == head);
    }
};
