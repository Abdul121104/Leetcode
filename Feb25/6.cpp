class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int a=nums[i]*nums[j];
                mp[a]++;
            }
        }
        int ans=0;
        for(auto it:mp){
            int p=it.second;
            if(p>1){
                ans+=8*((p*(p-1)/2));
            }
        }
        return ans;
    }
};
