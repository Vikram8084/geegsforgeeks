//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string compareNM(int n, int m){
        // code here
        string s1="lesser";
        string s2="equal";
        string s3="greater";
        if(n<m){
         return s1;
        }
        else if(n>m){
         return s3;
        }
        else{
            return s2;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m ; cin>>n>>m;
        Solution obj;
        cout<<obj.compareNM(n,m)<<"\n";
    }
    return 0;
}
// } Driver Code Ends