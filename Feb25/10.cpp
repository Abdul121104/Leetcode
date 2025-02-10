class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;

        for(int i = 0; i < s.size(); i++){
            if(isalpha(s[i])){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        string result = "";
        while(!st.empty()){
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
