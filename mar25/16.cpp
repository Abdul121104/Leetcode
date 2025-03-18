class Solution {
public:
bool isPossible(vector<int>& ranks, int cars, long long time){
    long long n=0;
    for(int i=0;i<ranks.size();i++){
        n += sqrt(time/ranks[i]);
    }
    return n>=cars;
}
    long long repairCars(vector<int>& ranks, int cars) {
        int maxRank=*max_element(ranks.begin(),ranks.end());
        long long l=1;
        long long h=(long long)maxRank*cars*cars;
        while(l<=h){
            long long mid=l+(h-l)/2;
            if(isPossible(ranks,cars,mid)){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return h+1;
    }
};
