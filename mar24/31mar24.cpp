
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int currMax=-1,currMin=-1,badInd=-1;
        long long res = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>maxK || nums[i]<minK) badInd = i;
            if(nums[i]==minK) currMin = i;
            if(nums[i]==maxK) currMax = i;
            res += max(0,min(currMin,currMax)-badInd);
        }
        return res;
    }
};
