class Solution {
  public:
    
    int firstOccurance(vector<int>& arr, int target) {
        int start = 0;
        int end = arr.size() - 1;
        int result = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target) {
                result = mid;     
                end = mid - 1;
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return result;
    }

    int lastOccurance(vector<int>& arr, int target) {
        int start = 0;
        int end = arr.size() - 1;
        int result2 = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target) {
                result2 = mid;    
                start = mid + 1;
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return result2;
    }

    int countFreq(vector<int>& arr, int target) {
        int first = firstOccurance(arr, target);
        int last = lastOccurance(arr, target);

        if (first == -1 || last == -1)
            return 0;

        return last - first + 1;
    }
};
