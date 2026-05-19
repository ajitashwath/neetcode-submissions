class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxx = 0, left = 0, right = heights.size() - 1;
        while(left < right) {
            maxx = max(maxx, (right - left) * min(heights[left], heights[right]));
            if(heights[left] < heights[right]) left++;
            else right--;
        }
        return maxx;
    }
};
