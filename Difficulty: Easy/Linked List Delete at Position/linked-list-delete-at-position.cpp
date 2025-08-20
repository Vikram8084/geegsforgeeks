// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/

Node *deleteAtPosition(Node *head, int pos) {
    if (head == NULL) return NULL;
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* curr = head;
    int length = 1;
    while (curr != NULL && length < pos - 1) {
        curr = curr->next;
        length++;
    }
    if (curr == NULL || curr->next == NULL) {
        return head;
    }

    Node* temp = curr->next;
    curr->next = temp->next;
    delete temp;

    return head;
}