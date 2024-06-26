//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	

	   int divisibleBy4 (string N)
{
    // If the string is empty, we cannot determine divisibility
    if (N.empty()) {
        return 0;
    }
    
    // Extract the last two digits as a string
    string lastTwoDigits;
    if (N.size() >= 2) {
        lastTwoDigits = N.substr(N.size() - 2);
    } else {
        lastTwoDigits = N;
    }

    // Convert the last two digits to an integer
    int lastTwo = stoi(lastTwoDigits);

    // Check if the integer formed by the last two digits is divisible by 4
    if (lastTwo % 4 == 0) {
        return 1;
    } else {
        return 0;
    }
}

	
};

//{ Driver Code Starts.

int32_t main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.divisibleBy4 (s) << endl;
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends