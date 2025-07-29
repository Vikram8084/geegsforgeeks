class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        vector<int> positives, negatives;

        for (int num : arr) {
            if (num >= 0)
                positives.push_back(num);
            else
                negatives.push_back(num);
        }
        arr = positives;
        arr.insert(arr.end(), negatives.begin(), negatives.end());
    }
};