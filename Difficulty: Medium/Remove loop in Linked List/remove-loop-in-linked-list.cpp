/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution {
  public:
    void removeLoop(Node* head) {
        if (head == NULL || head->next == NULL) return;

        Node* slow = head;
        Node* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) break;
        }

        if (slow == fast) {
            fast = head;

            // Special case: loop starts at head
            if (slow == fast) {
                while (slow->next != fast) {
                    slow = slow->next;
                }
                slow->next = NULL;
                return;
            }

            // General case
            while (slow->next != fast->next) {
                slow = slow->next;
                fast = fast->next;
            }

            // Break the loop
            slow->next = NULL;
        }
    }
};
