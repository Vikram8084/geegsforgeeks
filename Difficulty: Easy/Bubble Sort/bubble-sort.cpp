class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        // Your code here
    int n = arr.size();
    bool swapped;
    for (int pass = 0; pass < n - 1; ++pass) {
        swapped = false;
        for (int i = 0; i < n - pass - 1; ++i) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        if (!swapped) break;
    }
    }
};