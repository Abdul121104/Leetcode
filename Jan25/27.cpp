class Solution {
public:
    vector<vector<int>> t;
    bool dfs(unordered_map<int,vector<int>>&adj, vector<bool>&visited,int start,int end){
        if(start == end)return true;
        visited[start] = true;
        if(t[start][end] != -1)return t[start][end];
        for(int &v : adj[start]){
            if(!visited[v]){
                if(dfs(adj,visited,v,end))return t[start][end] = true;
            }
        }
        return t[start][end] = false;
    }
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        int m = queries.size();

        unordered_map<int,vector<int>>adj;
        t.resize(numCourses+1, vector<int>(numCourses+1, -1));

        for(vector<int>&vec : prerequisites){
            int a = vec[0];
            int b = vec[1];
            adj[a].push_back(b);
        }

        vector<bool>ans(m,false);
        for(int i=0;i<m;i++){
            int a = queries[i][0];
            int b = queries[i][1];
            vector<bool>visited(numCourses,false);
            ans[i] = dfs(adj,visited,a,b);
        }

        return ans;
    }
};
