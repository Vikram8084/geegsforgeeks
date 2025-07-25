class Solution {
  public:
    long long reversedBits(long long x) {
        long long result = 0;

        for (int i = 0; i < 32; i++) {
            result <<= 1;             
            result |= (x & 1);        
            x >>= 1;    
        }

        return result;
    }
};
