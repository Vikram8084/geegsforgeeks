// User function Template for C++

class Solution {
  public:
    int largest(int arr[], int n) {
        // code here
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            ans=max(arr[i],ans);
        }
        return ans;
    }
};
