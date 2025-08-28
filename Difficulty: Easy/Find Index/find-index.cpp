class Solution {
public:
    vector<int> findIndex(vector<int>& arr, int key) {
        int n = arr.size();
        int start = -1, end = -1;

        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                start = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] == key) {
                end = i;
                break;
            }
        }

        return {start, end};
    }
};
