/*
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++) mp[nums[i]]++;
        for(auto i : mp) {
            if(i.second >= 2) return true;
        }
        return false;
    }
};
*/
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int i : nums) {
            if(st.count(i)) return true;
            st.insert(i);
        }
        return false;
    }
};