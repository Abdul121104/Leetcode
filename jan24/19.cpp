class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        int n = heightMap.size();
        int m = heightMap[0].size();
        if (n < 3 || m < 3) return 0;
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

        vector<vector<bool>> visited(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                    pq.push({heightMap[i][j], {i, j}});
                    visited[i][j] = true;
                }
            }
        }


        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};

        int ans = 0;

        while(!pq.empty()){
            auto cell = pq.top();
            pq.pop();

            int height = cell.first;
            int x = cell.second.first;
            int y = cell.second.second;
            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if (nx < 0 || ny < 0 || nx >= n || ny >= m || visited[nx][ny]) continue;
                ans += max(0, height - heightMap[nx][ny]);
                pq.push({max(height, heightMap[nx][ny]), {nx, ny}});
                visited[nx][ny] = true;
            }

        }
        return ans;
    }
};
