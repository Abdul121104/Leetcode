class Solution {
public:
    long long coloredCells(int n) { 
        long long i=1,ans=1,mul=4;
        while(i<n){
            ans+=mul;
            mul+=4;
            i++;
        }
        return ans;
    }
};
