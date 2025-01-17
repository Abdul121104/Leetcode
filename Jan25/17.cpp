https://leetcode.com/problems/neighboring-bitwise-xor/solutions/6293647/2-line-code-easy-by-codedominator7-0j9o
class Solution {
public:
    bool doesValidArrayExist(vector<int>& d) {
        int x=0; for(int c:d) x^=c;
        return (!x);
    }
};
