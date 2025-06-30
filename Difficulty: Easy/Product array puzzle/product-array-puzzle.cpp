// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> result(n, 1);

        int left = 1;
        for (int i = 0; i < n; i++) {
            result[i] = left;
            left *= arr[i];
        }

        int right = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= right;
            right *= arr[i];
        }

        return result;
    }
};
