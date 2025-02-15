class Solution {
public:
    int punishmentNumber(int n) {
        int ans=0;
        vector<int> v={1,9,10,36,45,55,82,91,99,100,235,297,369,370,379,414,657,675,703,756,792,909,918,945,964,990,991,999,1000};
        for(int i=0;i<v.size()&&v[i]<=n;i++){
            ans+=v[i]*v[i];
        }
        return ans;
    }
};
