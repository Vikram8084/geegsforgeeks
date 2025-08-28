
class Solution {
  public:
    int search(int k, vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                return i+1;
            }
        }
        return -1;
        
    }
};
