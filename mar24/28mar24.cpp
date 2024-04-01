class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i=0, j=0, length=0;
        unordered_map<int, int>mp;
        while(j < nums.size()){
            mp[nums[j]]++;
            while((i<j)&&(mp[nums[j]]>k)){
                mp[nums[i]]--;
                i++;
            }
            length = max(length,(j-i+1));
            j++;
        } 
        return length;
    }
};
