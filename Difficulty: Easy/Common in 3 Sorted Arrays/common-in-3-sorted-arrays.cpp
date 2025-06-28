class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        
        vector<int> result;
        int i = 0, j = 0, k = 0;
        int n1=arr1.size();
        int n2=arr2.size();
        int n3=arr3.size();

        while (i < n1 && j < n2 && k < n3) {
            if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
                if (result.empty() || result.back() != arr1[i]) {
                    result.push_back(arr1[i]);
                }
                i++; j++; k++;
            }
            else if (arr1[i] < arr2[j]) {
                i++;
            }
            else if (arr2[j] < arr3[k]) {
                j++;
            }
            else {
                k++;
            }

            while (i > 0 && i < n1 && arr1[i] == arr1[i - 1]) i++;
            while (j > 0 && j < n2 && arr2[j] == arr2[j - 1]) j++;
            while (k > 0 && k < n3 && arr3[k] == arr3[k - 1]) k++;
        }

        if (result.empty()) {
            result.push_back(-1);
        }

        return result;
    }
};