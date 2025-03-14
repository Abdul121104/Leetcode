class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int neg=0;
        int pos=0;
        int l=0;
        int r=n-1;
        int ans=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]<0) {
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        neg=ans+1;
        l=0;
        r=n-1;
        ans=n;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]>0) {
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        pos = n-ans;
        return max(neg,pos);
    }
};
