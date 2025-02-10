//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int firstOcc(vector<int>&nums,int target){
        int start =0;
        int end =nums.size()-1;
        int result = -1;
        while(start <= end){
            int mid =start+(end - start)/2;
            if(nums[mid]==target){
                result =mid;
                end = mid -1;
            }
            else if(nums[mid]<target){
                start =mid+1;
            }
            else{
                end =mid-1;
            }

        }
        return result;
    }

    int lastOcc(vector<int>&nums, int target){
        int start =0;
        int end =nums.size()-1;
        int result = -1;
        while(start <= end){
            int mid =start+(end - start)/2;
            if(nums[mid]==target){
                result =mid;
                start = mid +1;
            }
            else if(nums[mid]<target){
                start =mid+1;
            }
            else{
                end =mid-1;
            }

        }
        return result;
    }
    vector<int> find(vector<int>& arr, int x) {
        // code here
        return {firstOcc(arr,x),lastOcc(arr,x)};
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x;
        cin >> x;
        cin.ignore();
        vector<int> ans;
        Solution ob;
        ans = ob.find(arr, x);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends