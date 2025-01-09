class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = pref.size();
        int count = 0;
        for(int i = 0; i<words.size(); i++){
            string ans = words[i].substr(0,n);
            if(ans == pref)
                count++;
        }
        return count;
    }
};
