#define ll long long int
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue <ll, vector<ll>, greater<ll> > pq; 
        int ans = 0;
        for(int i=0;i<nums.size();i++) pq.push(nums[i]);
        while (pq.top()<k) {
            ll x = pq.top(); pq.pop();
            ll y = pq.top(); pq.pop();
            pq.push(min(x, y) * 2 + max(x, y));
            ans++;
        }
        return ans;
    }
};
