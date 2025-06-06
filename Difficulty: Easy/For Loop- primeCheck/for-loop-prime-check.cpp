class Solution {
  public:
    string isPrime(int n) {

        // Code here
        if (n <= 1) return "No";  // 0 and 1 are not prime

        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) return "No";  // Found a divisor, not prime
        }

        return "Yes";  
    }
};