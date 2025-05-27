/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        // Your code here
       string numStr = to_string(n);

        for (char &ch : numStr) {
            if (ch == '0') {
                ch = '5';
            }
        }

        return stoi(numStr);
    }
};