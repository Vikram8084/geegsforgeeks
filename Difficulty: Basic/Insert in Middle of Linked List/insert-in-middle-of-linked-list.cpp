/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
public:
    Node *insertInMiddle(Node *head, int x) {
        // If the list is empty
        if (head == NULL) {
            return new Node(x);
        }

        if (head->next == NULL) {
            Node* newNode = new Node(x);
            head->next = newNode;
            return head;
        }

        Node* slow = head;
        Node* fast = head->next;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        Node* newNode = new Node(x);
        newNode->next = slow->next;
        slow->next = newNode;

        return head;
    }
};
