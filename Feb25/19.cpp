class Solution {
public:
     vector<char>arr = {'a','b','c'};
     vector<string>strAns;
     void dfs(string str ,int n){
         if(str.length() == n){
           strAns.push_back(str);
            return;
         }
         for(int i = 0 ; i < arr.size() ;i++){
            if(!str.empty() && str.back() == arr[i])continue;
            dfs(str+arr[i],n);
         }
     }
   
    string getHappyString(int n, int k) {
        
        dfs("",n);
        
        return strAns.size() >= k ? strAns[k-1] : "";
    }
};
