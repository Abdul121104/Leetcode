"https://leetcode.com/problems/bitwise-xor-of-all-pairings/solutions/6287696/simple-implementation-by-map-by-codedomi-0jsd"
class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        long long int m=nums1.size(),n=nums2.size(),ans=0;
        map<int ,int> map;
        for(int x:nums1) map[x]+=n;
        for(int x:nums2) map[x]+=m;
        for(auto x :map) {
            if(x.second&1) ans^=x.first;
            else ans^=0;
        }
        return ans;
    }
};
