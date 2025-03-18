class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 0;
        for(int i=0; i<n; i++){
            int temp = nums[i];
            int len = 0;
            if(maxLen>n-i) break;
            for(int j=i+1; j<n; j++){
                if((temp & nums[j])==0){
                    temp |= nums[j];
                    len++;
                }
                else break;
            }
            maxLen = max(maxLen,len+1);
        }
        return maxLen;
    }
};
