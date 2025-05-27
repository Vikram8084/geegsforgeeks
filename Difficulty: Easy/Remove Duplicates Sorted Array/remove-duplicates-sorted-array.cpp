class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
            // code here
     if (arr.empty()) return 0;
    
            int i = 0, j = 1;
            while (j < arr.size()) {
                if (arr[j] != arr[i]) {
                    i++;
                    arr[i] = arr[j];
                }
                j++;
            }
            return i + 1;
    }
};