class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {

        long odd_count=0;
        long even_count=0;
        long sum=0;

        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum%2==0)
                even_count++;
            else
                odd_count++;    
        }
        long long result = odd_count*even_count;
        cout<<result;
        long long finalValue = (result+odd_count)%1000000007;
        return (int)(finalValue);
    }
};
