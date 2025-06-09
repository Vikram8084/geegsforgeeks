// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.

class Solution {
  public:
    int findStepKeyIndex(vector<int>& arr, int k, int x) {
        // code here
        int i = 0;
        int n = arr.size();

        while (i < n) {
            if (arr[i] == x) return i;

            // Calculate how many steps to jump
            int step = max(1, abs(arr[i] - x) / k);
            i += step;
        }

        return -1;  // x not found
    }
};