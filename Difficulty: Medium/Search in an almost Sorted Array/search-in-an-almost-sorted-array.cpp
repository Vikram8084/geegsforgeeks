// User function Template for C++
class Solution {
  public:
    int findTarget(vector<int>& arr, int key) {
        // code here
        int n=arr.size();
        int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check mid
        if (arr[mid] == key) return mid;

        // Check mid - 1
        if (mid > low && arr[mid - 1] == key) return mid - 1;

        // Check mid + 1
        if (mid < high && arr[mid + 1] == key) return mid + 1;

        // Adjust search range
        if (key < arr[mid])
            high = mid - 2;
        else
            low = mid + 2;
    }

    return -1; // Not found
        
    }
};