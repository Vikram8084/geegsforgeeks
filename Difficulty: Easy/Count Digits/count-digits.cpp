class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
      int original = n; 
        vector<int> digits;

        while (n > 0) {
            int digit = n % 10;
            digits.push_back(digit);
            n = n / 10;
        }

        int count = 0;
        for (int i = 0; i < digits.size(); i++) {
            if (digits[i] > 0 && original % digits[i] == 0) {
                count++;
            }
        }

        return count;
        }
};