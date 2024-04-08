class Solution {
public:
    int countStudents(vector<int>& s, vector<int>& sd) {
        int one = 0, zero = 0;
        for (int i=0;i<s.size();i++) {
            if (s[i]==0) zero++;
            if (s[i]==1) one++;
        }
        for (int i=0;i<s.size();i++) {
            if (sd[i]==0 && zero>0) zero--;
            else if (sd[i]==1 && one>0) one--;
            else break;
        }
        return zero + one;
    }
};
