class Solution {
public:

    int dir[4][2] = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };

    bool isValid(int row, int col, int &n, int &m){
        return row >= 0 && col >= 0 && row < n && col < m; 
    }

    int minCost(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        if(n == 1 && m ==1) return 0;

        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));

        priority_queue <pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>> > pq; 
        pq.push({0, {0, 0}});

        while(!pq.empty()){

            pair<int, pair<int, int>> top = pq.top();
            pq.pop();

            int cost = top.first;
            int r = top.second.first;
            int c = top.second.second;

            for(int i = 0; i < 4; i++){

                int nr = r + dir[i][0];
                int nc = c + dir[i][1];
                int newCost = cost + (grid[r][c] == (i + 1)  ? 0 : 1);

                if(isValid(nr, nc, n, m) && dist[nr][nc] > newCost ){
                    dist[nr][nc] = newCost;
                    pq.push({newCost, {nr, nc}});
                }

            }

        }
        
        return dist[n-1][m-1];
    }
};
