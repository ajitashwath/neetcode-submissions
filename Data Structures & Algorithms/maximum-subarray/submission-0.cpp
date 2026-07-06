class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int curr_sum = nums[0];
        int max_far = nums[0];
        for(int i = 1; i < n; i++) {
            curr_sum = max(curr_sum + nums[i], nums[i]);
            max_far = max(max_far, curr_sum);
        }
        return max_far;
    }
};
