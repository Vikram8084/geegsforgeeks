class Solution {
  public:
    int countDigits(int n) {
        // code here
        int count=0;
        while(n>0){
            int digit=n%10;
            count++;
            n=n/10;
        }
        return count;
    }
};