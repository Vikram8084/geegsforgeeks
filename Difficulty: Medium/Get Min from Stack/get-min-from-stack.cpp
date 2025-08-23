class Solution {
    stack<int> s;     
    stack<int> minS;

  public:
    Solution() {
    
    }

    void push(int x) {
        s.push(x);
        if (minS.empty() || x <= minS.top()) {
            minS.push(x);
        } else {
            minS.push(minS.top());
        }
    }
    
    void pop() {
        if (!s.empty()) {
            s.pop();
            minS.pop();
        }
    }

    int peek() {
        if (s.empty()) return -1; 
        return s.top();
    }

    int getMin() {
        if (minS.empty()) return -1; 
        return minS.top();
    }
};
