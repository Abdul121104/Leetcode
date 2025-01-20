class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        map<int,pair<int ,int>> m;
        for(int i=0;i<mat.size();i++) for(int j=0;j<mat[0].size();j++) m[mat[i][j]]={i,j};
        vector<int> r(mat.size(),0),c(mat[0].size(),0);
        for(int x=0;x<arr.size();x++) {
            int row=m[arr[x]].first,col=m[arr[x]].second;
            r[row]++;
            c[col]++;
            if(r[row]==mat[0].size()||c[col]==mat.size()) return x;
        }
        return -1;
    }
};
