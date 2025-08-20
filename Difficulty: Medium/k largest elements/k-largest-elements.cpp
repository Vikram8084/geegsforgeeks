class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        vector<int> result;
        for (int num : arr) {
            minHeap.push(num);
            if ((int)minHeap.size() > k) {
                minHeap.pop();
            }
        }
    
        while (!minHeap.empty()) {
            result.push_back(minHeap.top());
            minHeap.pop();
        }
        sort(result.begin(), result.end(),greater<int>());
        
        return result;
    }
};
