class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
    unordered_map<int, int> freq;

    for (int num : a) {
        freq[num]++;
    }

    for (int num : b) {
        if (freq[num] == 0) {
            return false;  
        }
        freq[num]--;
    }

    return true;
    }
};