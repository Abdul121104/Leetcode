class Solution {
public:
    int numTilePossibilities(string tiles) {
        unordered_map<char, int> count;
        for(char c : tiles) {
            count[c]++;
        }
        return dfs(count);
    }

    int dfs(unordered_map<char,int>& count){
        int res = 0;
        for(auto& el : count) {
            if(el.second>0){
                el.second-=1;
                res+=1;
                res += dfs(count);
                el.second+=1;
            }
        }
        return res;
    }
};
