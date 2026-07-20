class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        for(int i = 0; i < n; i++) {
            int start = intervals[i][0];
            int end = intervals[i][1];
            int j = i + 1;
            while(j < n && intervals[j][0] <= end) {
                end = max(end, intervals[j][1]);
                j++;
            }
            res.push_back({start, end});
            i = j - 1;
        }
        return res;
    }
};