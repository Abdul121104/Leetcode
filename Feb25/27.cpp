class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum = nums[0];
        int maxEnd = nums[0];
        int minEnd = nums[0];
        int minSum = nums[0];
        int n = nums.size();
        for(int i = 1; i < n; i++){
            maxEnd = max(maxEnd + nums[i], nums[i]);
            maxSum = max(maxSum, maxEnd);
            minEnd = min(minEnd + nums[i], nums[i]);
            minSum = min(minSum, minEnd);
        }
        return max(abs(maxSum), abs(minSum));
    }
};
