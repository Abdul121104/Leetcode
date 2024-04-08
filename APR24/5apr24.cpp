class Solution {
public:
    string makeGood(string s) {
        string ans = "";
        for(int i = 0 ; i<s.length() ; i++){
           if(ans.empty()) ans.push_back(s[i]);
           else{
            if(ans.back() == (s[i] -'a' + 'A') || ans.back()  == (s[i] -'A' + 'a'))
                ans.pop_back();
            else
               ans.push_back(s[i]);
           }
        }
        return ans ;
    }
};
