class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        vector<int>ans;
        int n = arr.size();
        vector<int> freq(n + 1, 0);
    
        for (int num : arr) {
            freq[num]++;
        }
    
        int missing = -1, repeating = -1;
    
        for (int i = 1; i <= n; i++) {
            if (freq[i] == 0) {
                missing = i;
               
            } else if (freq[i] == 2) {
                repeating = i;
                
            }
        }
        ans.push_back(repeating);
        ans.push_back(missing);
    
        return ans;
    }
};