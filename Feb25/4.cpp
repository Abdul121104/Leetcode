class Solution {
public:
    int maxAscendingSum(vector<int>& a) {
        int curr=a[0],ans=*max_element(a.begin(),a.end());
        for(int i=1;i<a.size();i++){
            if(a[i]>a[i-1]) {curr+=a[i];ans=max(ans,curr);}
            else {
                curr=a[i];
            } 
        }
        return ans;
    }
};
