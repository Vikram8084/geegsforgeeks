// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        int start=1;
        int end=n;
        int ans=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid*mid == n){
                
                return mid;
            }
            if(mid*mid<n){
                ans=mid;
                start=mid +1;
                
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};