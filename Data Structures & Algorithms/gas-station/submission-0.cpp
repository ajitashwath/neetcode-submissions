class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int total = 0, pre = 0, minpre = 0, start = 0;
        for(int i = 0; i < n; i++) {
            int diff = gas[i] - cost[i];
            total += diff;
            pre += diff;
            if(pre < minpre) {
                minpre = pre;
                start = i + 1;
            }
        }
        if(total < 0) return -1;
        return start % n;
    }
};