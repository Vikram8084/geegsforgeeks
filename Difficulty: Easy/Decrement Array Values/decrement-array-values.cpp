class Solution {
  public:
    int* decrementArrayElements(int arr[], int size) {
        // Code here
        vector<int>ans;
        for(int i=0;i<size;i++){
            arr[i]=arr[i]-1;
            // ans.push_back(arr[i]);
        }
        return arr;
    }
};