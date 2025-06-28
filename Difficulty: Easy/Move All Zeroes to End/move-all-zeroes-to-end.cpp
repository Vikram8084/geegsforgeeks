// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n = arr.size();
        int j = 0; 
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                if (i != j) {
                    swap(arr[i], arr[j]);
                }
                j++;
            }
        }
    }
};