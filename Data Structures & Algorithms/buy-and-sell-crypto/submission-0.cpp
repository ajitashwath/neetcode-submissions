class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), ans = 0, minn = prices[0];
        for(int i = 0; i < n; i++) {
            if(prices[i] > minn) ans = max(ans, prices[i] - minn);
            else minn = prices[i];
        }
        return ans;
    }
};
