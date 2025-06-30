class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
    unordered_set<int> s;
    for (int num : arr) {
        if (num > 0)
            s.insert(num);
    }

    for (int i = 1; i <= arr.size() + 1; i++) {
        if (s.find(i) == s.end()) {
            return i;
        }
    }

    return -1;
    }
};