class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> cars;
        for(int i = 0; i < n; i++) {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.rbegin(), cars.rend());
        vector<double> stk;
        for(auto &i : cars) {
            stk.push_back((double)(target - i.first) / (i.second));
            if(stk.size() >= 2 && stk.back() <= stk[stk.size() - 2]) stk.pop_back();
        }
        return stk.size();
    }
};