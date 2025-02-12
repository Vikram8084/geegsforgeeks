//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// Function to find the data of kth node from the end of a linked list.
class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Node* fast =head;
        // Node*slow =head;
        // for(int i=0;i<k;i++)fast=fast->next;
        
        // if(fast == NULL) return head->next->data;
        // while(fast->next!=NULL){
        //     fast =fast->next;
        //     slow=slow->next;
        // }
        // Node*delNode =slow->next;
        // slow->next=slow->next->next;
        // delete(delNode);
        // return head->data;
        Node* fast = head;
        Node* slow = head;

        // Move fast k steps ahead
        for (int i = 0; i < k; i++) {
            if (fast == NULL) return -1;  // If k is greater than length, return error
            fast = fast->next;
        }

        // Move both pointers until fast reaches the end
        while (fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        // Slow is now pointing to the Kth node from the last
        return slow->data;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        // Read numbers from the input line
        while (ss >> number) {
            arr.push_back(number);
        }

        int x;
        cin >> x;
        cin.ignore();

        Node* head = nullptr;

        // Check if the array is empty
        if (!arr.empty()) {
            head = new Node(arr[0]);
            Node* tail = head;
            for (size_t i = 1; i < arr.size(); ++i) {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }

        Solution ob;
        cout << ob.getKthFromLast(head, x) << endl;
    }
    return 0;
}
// } Driver Code Ends