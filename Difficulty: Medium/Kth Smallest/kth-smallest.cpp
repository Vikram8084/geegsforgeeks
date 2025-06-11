// User function template for C++

class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        sort(arr.begin(), arr.end());  // Sort the array
        return arr[k - 1];  // k-th smallest is at index k-1
    }
};
