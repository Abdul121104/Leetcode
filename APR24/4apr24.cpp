class Solution {
public:
    int maxDepth(string s) {
        int open=0,close=0,n=s.size(),maxx=0;
        for (char c:s) {
            if (c=='(') open++;
            else if(c == ')') {maxx=max(maxx, open);open--;}
        }
        return maxx;
    }
};
