class Solution {
public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int m = 0, n = 0;
        int l = a.size(), s = b.size();
        vector<int> ans;

        while (m < l && n < s) {
            if (a[m] < b[n]) {
                if (ans.empty() || ans.back() != a[m])
                    ans.push_back(a[m]);
                m++;
            } else if (b[n] < a[m]) {
                if (ans.empty() || ans.back() != b[n])
                    ans.push_back(b[n]);
                n++;
            } else {
                if (ans.empty() || ans.back() != a[m])
                    ans.push_back(a[m]);
                m++;
                n++;
            }
        }

        while (m < l) {
            if (ans.empty() || ans.back() != a[m])
                ans.push_back(a[m]);
            m++;
        }

        while (n < s) {
            if (ans.empty() || ans.back() != b[n])
                ans.push_back(b[n]);
            n++;
        }

        return ans;
    }
};
