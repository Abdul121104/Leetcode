class Solution {
public:
    int n,m;
    string s;
    bool solve(int index,int i, int j,vector<vector<char>>& board,vector<vector<bool>>& visited){
        if(index == s.size())
            return true;
        if(i<0 || j<0 || i==n || j==m || s[index]!=board[i][j] || visited[i][j])
            return false;
        visited[i][j]=true;
        bool c1=solve(index+1,i+1,j,board,visited);
        bool c2=solve(index+1,i-1,j,board,visited);
        bool c3=solve(index+1,i,j+1,board,visited);
        bool c4=solve(index+1,i,j-1,board,visited);
        visited[i][j]=false;
        return (c1||c2||c3||c4)?true:false;
}
bool exist(vector<vector<char>>& board, string word) {
        n = board.size(),m = board[0].size();
        s=word;
        vector<vector<bool>> visited(n, vector<bool>(m));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(board[i][j]==word[0])
                    if(solve(0,i,j,board,visited) == true)
                        return true;
        return false;
    }
};
