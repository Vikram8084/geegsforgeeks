//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long long seriesSum(int n) {
    if(n%2==0){
        return n/2 * 1LL *(n+1);
    }
    else{
    return ((n+1)/2) * 1LL *n;  
    }
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        Solution obj;
        long long res = obj.seriesSum(n);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends