class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int c=0;
        unordered_set<char> s11,s22;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                c++;
                s11.insert(s1[i]);
                s22.insert(s2[i]);
            }
        }
        return (c==2 && (s11.size()==2&&s22.size()==2&&s11==s22)||c==0) ? 1:0;
    }
};
