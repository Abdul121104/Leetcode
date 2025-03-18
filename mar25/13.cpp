class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int q=queries.size();
        vector <int> diff(n+1,0);
        int sum=0;
        int queryCount=0;
        for(int i=0;i<n;i++){
            while(sum+diff[i]<nums[i]){
                queryCount++;
                if(queryCount>q) return -1;
                int l=queries[queryCount-1][0];
                int r=queries[queryCount-1][1];
                int v=queries[queryCount-1][2];
                if(r>=i){
                    diff[max(l,i)]+=v;
                    diff[r+1]-=v;
                }
            }
            sum+=diff[i];
        }
        return queryCount; 
    }
};
