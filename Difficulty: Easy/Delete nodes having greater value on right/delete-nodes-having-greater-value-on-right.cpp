/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
public:
    Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    Node *compute(Node *head) {
        head = reverse(head);
        Node* curr = head;
        Node* maxNode = head;
        while (curr && curr->next) {
            if (curr->next->data < maxNode->data) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
                maxNode = curr;
            }
        }
        head = reverse(head);
        return head;
    }
};
