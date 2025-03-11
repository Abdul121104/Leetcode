class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size() ;
        int left = 0 ,right = 0 ;
        int count = 0 ;
        while(left<n && right<n+k){
            right++ ;
            if(colors[right%n]==colors[(right+1)%n]) left = right ;
            if(right-left==k-1){
                count++ ;
                left++ ;
            }
        }
        return count ;
    }
};
