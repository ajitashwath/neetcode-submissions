class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> longest(256, -1);
        int left = 0, maxx = 0;
        for(int right = 0; right < s.size(); right++) {
            if(longest[s[right]] >= left) left = longest[s[right]] + 1;
            longest[s[right]] = right;
            maxx = max(maxx, right - left + 1);
        }
        return maxx;
    }
};
