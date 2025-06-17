/*
structure of the node of the list is as
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

class Solution {
public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        Node* newNode = new Node(key);

        // Case 1: Empty list
        if (head == NULL)
            return newNode;

        // Case 2: Insert before head
        if (key < head->data) {
            newNode->next = head;
            return newNode;
        }

        // Case 3: Insert somewhere after head
        Node* current = head;
        while (current->next != NULL && current->next->data < key) {
            current = current->next;
        }

        newNode->next = current->next;
        current->next = newNode;

        return head;
    }
};
