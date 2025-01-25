class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int k) 
    {
        int n=nums.size();
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++) arr.push_back({nums[i],i});
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            vector<int> index,temp;
            int last=arr[i].first;
            while(i<n && ((arr[i].first-last)<=k))
            {
                index.push_back(arr[i].second);
                temp.push_back(arr[i].first);
                last=arr[i].first;
                i++;
            }
            i--;
            sort(index.begin(),index.end());
            sort(temp.begin(),temp.end());
            for(int j=0;j<temp.size();j++) nums[index[j]]=temp[j];
        }
        return nums;
    }
};
