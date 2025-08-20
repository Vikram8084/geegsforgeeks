class Solution {
  public:
    // Function to return kth largest element from an array.
    int KthLargest(vector<int> &arr, int k) {
        // Your code here
        // sort(arr.begin(), arr.end(), greater<int>()); 
        // return arr[k-1]; 
        
        priority_queue<int, vector<int>, greater<int>> minHeap;
        
        for (int num : arr) {
            minHeap.push(num);
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }
        
        return minHeap.top();
    }
};