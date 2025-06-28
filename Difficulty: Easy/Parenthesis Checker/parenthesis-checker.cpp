
class Solution {
  public:
    bool isBalanced(string& k) {
        stack<char> st;
        for (int i = 0; i < k.size(); i++) {
            char ch = k[i];
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (!st.empty()) {
                    if ((ch == ')' && st.top() == '(') ||
                        (ch == '}' && st.top() == '{') ||
                        (ch == ']' && st.top() == '[')) {
                        st.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
