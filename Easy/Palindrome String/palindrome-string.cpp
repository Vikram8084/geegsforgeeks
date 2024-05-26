//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
// 	int isPalindrome(string S)
// 	{
// 	    // Your code goes here
// 	    int n=S.length();
// 	    int start =0;
// 	    int end=S.length() - 1;
// 	    while(start<end){
// 	        if(S[start] == S[end]){
// 	            start++;
// 	            end--;
// 	            return 1;
// 	        }
// 	        else{
// 	            return 0;
// 	        }
	        
// 	    }
// 	}
int isPalindrome(string S)
{
    int n = S.length();
    int start = 0;
    int end = n - 1;
    
    while (start < end) {
        if (S[start] != S[end]) {
            return 0; // If characters don't match, it's not a palindrome
        }
        start++;
        end--;
    }
    
    return 1; // If all characters matched, it's a palindrome
}


};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends