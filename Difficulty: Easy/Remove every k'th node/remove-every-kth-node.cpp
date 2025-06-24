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

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */
class Solution {
  public:
    Node* deleteK(Node* head, int k) {
        if (head == NULL || k == 0) return head;
        if (k == 1) {
            // delete all nodes
            while (head != NULL) {
                Node* temp = head;
                head = head->next;
                delete temp;
            }
            return NULL;
        }

        Node* curr = head;
        Node* prev = NULL;
        int count = 1; // position starts at 1

        while (curr != NULL) {
            if (count % k == 0) {
                // Delete current node
                if (prev != NULL) {
                    prev->next = curr->next;
                    delete curr;
                    curr = prev->next;
                } else {
                    // Deleting the head node
                    Node* temp = curr;
                    head = head->next;
                    delete temp;
                    curr = head;
                }
            } else {
                prev = curr;
                curr = curr->next;
            }
            count++;
        }

        return head;
    }
};
