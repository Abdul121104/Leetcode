class Solution {
public:
    int solve(string s1,string s2){
        int len = s1.length();
        if (len > s2.length()) return 0;
        if (s2.substr(0,len)==s1 && s2.substr(s2.length()-len)==s1){
            return 1;
        }
        return 0;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans=0;
        for (int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                ans+=solve(words[i],words[j]);
            }
        }
        return ans;
    }
};
