class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size();
        if(n < k)
            return 0;
        if(n == k)
            return 1;
        vector<int> arr(26, 0);
        for(int i=0; i<n; i++) arr[s[i] - 'a']++;
        int c=0;
        for(int i=0; i<26; i++)
            if(arr[i] % 2 == 1) c++;
        return c<=k;
    }
};
