class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        int curr=0,n=a.size();
        vector<int> ans;
        unordered_set<int> s;
        for (int i = 0; i <n; i++) {
            s.insert(a[i]);
            s.insert(b[i]);
            ans.push_back(2*(i+1)-s.size());
        }
        return ans;
    }
};
