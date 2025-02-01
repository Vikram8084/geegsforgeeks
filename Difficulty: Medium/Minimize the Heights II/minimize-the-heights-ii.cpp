//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if (n == 1) return 0;

        // Sort the array
        sort(arr.begin(), arr.end());

        // Initial difference between max and min heights
        int diff = arr[n - 1] - arr[0];

        // Traverse the sorted array and calculate possible differences
        int minHeight, maxHeight;
        for (int i = 0; i < n - 1; i++) {
            // Ensure we are not creating negative heights
            minHeight = min(arr[0] + k, arr[i + 1] - k);
            maxHeight = max(arr[n - 1] - k, arr[i] + k);

            if (minHeight < 0) continue; // Skip if negative height

            diff = min(diff, maxHeight - minHeight);
        }

        return diff;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, k;
        cin >> k;
        cin.ignore();
        vector<int> a, b, c, d;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution ob;
        auto ans = ob.getMinDiff(a, k);
        cout << ans << "\n";
        cout << '~' << endl;
    }
    return 0;
}
// } Driver Code Ends