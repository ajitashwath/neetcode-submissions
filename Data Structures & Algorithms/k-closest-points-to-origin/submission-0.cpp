class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> pq;
        for(auto &p : points) {
            // root (x1 - x2)^2 + (y1 - y2)^2
            int dist = p[0] * p[0] + p[1] * p[1];
            pq.push({dist, p});
            if(pq.size() > k) pq.pop();
        }
        vector<vector<int>> ans;
        while(!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};