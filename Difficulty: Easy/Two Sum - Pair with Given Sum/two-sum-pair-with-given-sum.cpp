class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        // int n=arr.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(arr[i] +arr[j] ==target){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        
        
        unordered_set<int> seen;

        for (int num : arr) {
            int complement = target - num;
            if (seen.count(complement)) {
                return true;
            }
            seen.insert(num);
        }

        return false;
    
    }
};