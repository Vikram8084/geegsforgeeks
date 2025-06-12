// User function template for C++

#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string minSum(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        string num1 = "", num2 = "";

        // Distribute digits alternately to form two numbers
        for (int i = 0; i < arr.size(); i++) {
            if (i % 2 == 0) {
                num1 += to_string(arr[i]);
            } else {
                num2 += to_string(arr[i]);
            }
        }

        string sum = addStrings(num1, num2);

        // Remove leading zeros from final result
        int idx = 0;
        while (idx < sum.size() && sum[idx] == '0') {
            idx++;
        }

        return (idx == sum.size()) ? "0" : sum.substr(idx);
    }

private:
    // Helper to add two strings representing numbers
    string addStrings(const string& num1, const string& num2) {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        string result = "";

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += num1[i--] - '0';
            if (j >= 0) sum += num2[j--] - '0';
            result += (sum % 10) + '0';
            carry = sum / 10;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
