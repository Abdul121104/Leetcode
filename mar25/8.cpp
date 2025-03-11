class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int minw=INT_MAX;
        int temp=0;
        int i=0,j=0;
        int n=blocks.length();
        while(j<n){
            if(blocks[j]=='W'){
                temp++;
            }
            if(j-i+1==k){
                minw=min(minw,temp);
                if(blocks[i]=='W'){
                    temp--;
                    
                }
                i++;
            }
            j++;
        }
        return minw;
    }
};
