// User function template for C++
class Solution {
  public:

    string removeDups(string &s) {
        // Your code goes here
        string result;
        unordered_map<char,bool>mpp;
        for(char ch:s){
            if(mpp.find(ch) ==mpp.end()){
                result.push_back(ch);
                mpp[ch]=true;
            }
        }
        return result;
    }
};