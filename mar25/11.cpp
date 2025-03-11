class Solution {
public:
    int numberOfSubstrings(string s) {
        int left=0,right=0,ans=0,n=s.size();
        unordered_map<char,int> map;
        while(right<n){
            if(s[right]=='a'||s[right]=='b'||s[right]=='c') map[s[right]]++;
            while(map.size()==3) {
                ans+=n-right;
                map[s[left]]--;
                if(map[s[left]]==0) map.erase(s[left]);
                left++;
            }
             right++;
        }
        return ans;
    }
};
