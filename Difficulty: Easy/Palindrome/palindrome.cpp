class Solution {
  public:
    bool isPalindrome(int n) {
        // code here.
        int ans=0;
        int original=n;
        while(n>0){
            int digit=n%10;
            ans=(ans*10)+digit;
            n=n/10;
        }
        
        return original==ans;
    }
};