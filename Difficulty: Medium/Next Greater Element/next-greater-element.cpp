class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        vector<int>ans;
        stack<int>st;
        int n=arr.size();
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
            }
            if(st.empty()) ans.push_back(-1);
            else{
                ans.push_back(st.top());
            }
            //push current element
            st.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};