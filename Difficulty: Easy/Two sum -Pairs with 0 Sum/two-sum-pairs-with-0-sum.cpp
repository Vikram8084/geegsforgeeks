// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        int start=0;
        int end=arr.size()-1;
        while(start<end){
            int sum = arr[start] + arr[end];
            
            if (sum == 0) {
                ans.push_back({arr[start], arr[end]});
                start++;
                end--;
                while (start < end && arr[start] == arr[start-1]) start++;
                while (start < end && arr[end] == arr[end+1]) end--;
            }
            else if (sum < 0) {
                start++;
            } 
            else {
                end--;
            }
        }
        return ans;
    }
};