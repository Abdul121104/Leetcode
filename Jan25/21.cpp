class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long s1=0,s2=0;
        for(int i=0;i<grid[0].size()-1;i++)s2+=grid[1][i];
        long long ans = LONG_MAX;
        int i = grid[0].size()-1,j=grid[0].size() - 2;
        while(j>=0){
           ans = min(max(s1,s2) , ans);
           s1+=grid[0][i--];
           s2-=grid[1][j--];
        }
        ans = min(max(s1,s2) , ans);
        return ans;
    }
};
