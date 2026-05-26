class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n, -1), right(n, n);
        stack<int> stk;
        for(int i = 0; i < n; i++) {
            while(!stk.empty() && heights[stk.top()] > heights[i]) stk.pop();
            if(!stk.empty()) left[i] = stk.top();
            stk.push(i);
        }
        while(!stk.empty()) stk.pop();
        for(int i = n - 1; i >= 0; i--) {
            while(!stk.empty() && heights[stk.top()] >= heights[i]) stk.pop();
            if(!stk.empty()) right[i] = stk.top();
            stk.push(i);
        }
        int maxx = 0;
        for(int i = 0; i < n; i++) {
            left[i] += 1; right[i] -= 1;
            maxx = max(maxx, heights[i] * (right[i] - left[i] + 1));
        }
        return maxx;
    }
};
