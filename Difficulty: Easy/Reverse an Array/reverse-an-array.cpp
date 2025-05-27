class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int right=arr.size()-1;
        int left =0;
        while(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
    }
};