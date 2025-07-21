// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int original=n;
        int ans=0;
        while(n>0){
            int digit=n%10;
            ans +=digit*digit*digit;
            n=n/10;
            
        }
        return ans==original;
    }
};