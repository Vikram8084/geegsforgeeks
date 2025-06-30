class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        int m = a.size();
        int n = b.size();
        int l = 0, r = 0;
        vector<int> result;
        while (l < m && r < n) {
            if (a[l] < b[r]) {
                result.push_back(a[l++]);
            } else {
                result.push_back(b[r++]);
            }
        }
        while (l < m) {
            result.push_back(a[l++]);
        }
        while (r < n) {
            result.push_back(b[r++]);
        }
        return result[k - 1];
        
    }
};