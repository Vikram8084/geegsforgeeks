// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int size=arr.size();
        int count=0;
        for(int i=0;i<size;i++){
            if(arr[i]==0){
                count++;
            }
        }
        return count;
    }
};