class Solution {
public:
    bool check(vector<int> v1,vector<int> v2){
        for(int i=0;i<26;i++){
            if(v2[i] && v2[i]>v1[i]) return 0;
        }
        return 1;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> v2(26,0);
        for(auto word:words2){
            vector<int> v(26,0);
            for(auto x:word){
                v[x-'a']++;
            }
            for(int i=0;i<26;i++){
                v2[i]=max(v2[i],v[i]);
            }
        }
        vector<string> ans;
        for(auto word:words1){
            vector<int> v1(26,0);
            for(auto x:word){
                v1[x-'a']++;
            }
            if(check(v1,v2)) ans.push_back(word);
        }
        return ans;
    }
};
