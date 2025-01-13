https://leetcode.com/problems/minimum-length-of-string-after-operations/solutions/6272511/easy-2-pass-solution-by-codedominator7-h39x
class Solution {
public:
    int minimumLength(string s) {
        vector<int> v(26,0);
        for(char x:s) v[x-'a']++;
        int ans=0;
        for(int x: v){
            if(x<=2) ans+=x;
            else if(x&1) ans+=1;
            else ans+=2;
        }
        return ans;
    }
};
