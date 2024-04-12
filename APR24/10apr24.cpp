class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& v) {
        int n = v.size();
        int count=0,flag=0;
        vector<int>a(n,0);
        sort(v.begin(),v.end());
        int j=0;
        while(count<n){
           for(int i=0;i<n;i++){
              if(a[i]==0){
                 if(flag==0){
                   flag=1;
                   a[i]=v[j];
                   j++;
                   count++;
                 }
                 else{
                    flag=0;
                 }
              }  
              
           }
        }        
        return a;
    }
};
