class Solution {
  public:
    void binSort(vector<int> &arr) {
        // code here
        int low = 0, n = arr.size();

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                swap(arr[i], arr[low]);
                low++;
            }
        }
    }
};
