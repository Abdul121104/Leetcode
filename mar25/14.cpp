class Solution {
public:
    bool check(vector<int>& candies, long long k, long long mid) {
        long long curr=0;
        for (int x:candies) curr+=(x/mid);
        return (curr>=k);
    }
    int maximumCandies(vector<int>& candies, long long k) {
        long long l=1,r=10000000,mid;
        while (l<=r){
            mid=l+(r-l)/2;
            if(check(candies,k,mid)) l=mid+1;
            else r=mid-1;
        }
        return r;
    }
};
