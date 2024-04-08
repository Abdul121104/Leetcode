class Solution {
public:
    bool checkValidString(string s) {
        int n = s.length();
        stack<int> st;
        vector<int> star;
        for(int i=0; i<n; i++){
            char ch = s[i];
            if(ch == '('){
                st.push(i);
            }
            else if(ch == ')'){
                if(st.empty()){
                    if(star.size() == 0)
                        return false;
                    else
                        star.pop_back();
                }
                else
                    st.pop();
            }
            else
                star.push_back(i);
        }
        if(st.size() == 0)
            return true;
        int m=star.size();
        int i=m-1;
        while(!st.empty() && i >= 0){
            if(st.top() > star[i]){
                return false;
            }
            i--;
            st.pop();
        }
        if(st.size() > 0)
            return false;
        return true;
    }
};
