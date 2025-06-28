class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>freq(n,0);
        for (int i = 0; i < n; ++i) {
            if (arr[i] <= n) {
                freq[arr[i] - 1]++;
            }
        }

        for (int i = 0; i < n; ++i) {
            arr[i] = freq[i];
        }
        return freq;
    }
};
