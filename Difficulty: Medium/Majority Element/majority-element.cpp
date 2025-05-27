// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int mid = arr[arr.size() / 2];
        int count = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == mid) {
                count++;
            }
        }
        if (count > arr.size() / 2) {
            return mid;
        } else {
            return -1; 
        }
    }
    
};