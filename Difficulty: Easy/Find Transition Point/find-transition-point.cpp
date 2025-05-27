class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        // code here
        int ans=-1;
        int start = 0;
        int end = arr.size() - 1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if (arr[mid] == 1) {
                ans = mid;          // record the current match
                end = mid - 1;      // move left to find earlier occurrence
            }
            else if (arr[mid] < 1) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return ans;
    }
};