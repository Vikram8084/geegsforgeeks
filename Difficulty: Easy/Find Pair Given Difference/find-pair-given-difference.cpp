
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
    sort(arr.begin(), arr.end());

    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int target = arr[i] + x;
        if (binary_search(arr.begin() + i + 1, arr.end(), target)) {
            return true;
        }
    }
    return false;
    }
};
