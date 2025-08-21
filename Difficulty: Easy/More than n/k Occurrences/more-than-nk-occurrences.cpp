class Solution {
  public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(vector<int>& arr, int k) {
        // Your code here
        int n = arr.size();
        int count = 0;
        unordered_map<int,int> freq;
        
        for(int num : arr){
            freq[num]++;
        }
        
        for(auto &it : freq){
            if(it.second > n/k){
                count++;
            }
        }
        
        return count;
    }
};