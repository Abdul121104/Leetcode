class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size();
        int n = isWater[0].size();

        vector<vector<int>> ans(m, vector<int>(n, -1));
        queue<pair<int, int>> q;

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(isWater[i][j] == 1)
                {
                    ans[i][j] = 0;
                    q.push({i, j});
                }
            }
        }

        while(!q.empty())
        {
            pair<int, int> p = q.front();
            q.pop();
            int i = p.first;
            int j = p.second;

            int dr[] = {-1, 1, 0, 0};
            int dc[] = {0, 0, -1, 1};

            for(int k = 0; k < 4; k++)
            {
                int tr = i + dr[k];
                int tc = j + dc[k];
                if(tr >= 0 && tr < m && tc >= 0 && tc < n)
                {
                    if(ans[tr][tc] == -1)
                    {
                        ans[tr][tc] = ans[i][j] + 1;
                        q.push({tr, tc});
                    }
                }
            }
        }
        return ans;
    }
};
