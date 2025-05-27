class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        // int start=0;
        // int end=arr.size()-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==k){
                return i;
            }
        }
        return -1;
    }
};