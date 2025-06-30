class Solution {
  public:
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
    unordered_set<int> unionA;

    for (int num : a) {
        unionA.insert(num);
    }

    for (int num : b) {
        unionA.insert(num);
    }

    return unionA.size(); 
    }
};