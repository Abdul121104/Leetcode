class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n=nums.size();
        long long res=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int x=nums[i]-i;
            if(mp.find(x)!=mp.end()) res+=mp[x];
            mp[x]++;
        }
        return n*(n-1)/2-res;
    }
};
