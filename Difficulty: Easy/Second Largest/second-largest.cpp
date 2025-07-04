class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end()); 
        int n = arr.size();

        for (int i = n - 2; i >= 0; i--) {  
            if (arr[i] < arr[n - 1]) {     
                return arr[i];
            }
        }

        return -1;
    }
};